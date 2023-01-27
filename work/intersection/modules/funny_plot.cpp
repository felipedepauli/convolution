#include "../include/funny_plot.hpp"
#include <iostream>

using namespace cv;

int factor = 1;

FunnyPlot::FunnyPlot() {
    
}

void FunnyPlot::getObjects(Forms &fs) {
    forms.push_back(fs.getForm(0));
    forms.push_back(fs.getForm(1));

    int m0_p1_x = forms[0]->getXo();
    int m0_p1_y = forms[0]->getYo();
    int m0_p3_x = forms[0]->getX();
    int m0_p3_y = forms[0]->getY();
    int m0_p2_x = m0_p3_x;
    int m0_p2_y = m0_p1_y;
    int m0_p4_x = m0_p1_x;
    int m0_p4_y = m0_p3_y;

    int m1_p1_x = forms[1]->getXo();
    int m1_p1_y = forms[1]->getYo();
    int m1_p3_x = forms[1]->getX();
    int m1_p3_y = forms[1]->getY();
    int m1_p2_x = m1_p3_x;
    int m1_p2_y = m1_p1_y;
    int m1_p4_x = m1_p1_x;
    int m1_p4_y = m1_p3_y;

    m0.p1 = cv::Point2d(m0_p1_x, m0_p1_y);
    m0.p2 = cv::Point2d(m0_p2_x, m0_p2_y);
    m0.p3 = cv::Point2d(m0_p3_x, m0_p3_y);
    m0.p4 = cv::Point2d(m0_p4_x, m0_p4_y);
    m1.p1 = cv::Point2d(m1_p1_x, m1_p1_y);
    m1.p2 = cv::Point2d(m1_p2_x, m1_p2_y);
    m1.p3 = cv::Point2d(m1_p3_x, m1_p3_y);
    m1.p4 = cv::Point2d(m1_p4_x, m1_p4_y);

}
int func(int increment);

int FunnyPlot::plot(int argc, std::string file) {
    uint32_t count = 0;

    int select = func(0);
    select = 0;
    bool quit = false;
    while(1) {
        if (select == 100 || select == 65363)       select = func(factor);
        else if (select == 97 || select == 65361)   select = func(-factor);
        else if (select == 113) {
            select = func(0);
            if (select == 119)
            break;
        } else select = func(0);
    }
    return 0;
}

float returnArea(int a, int b) {
    return (float)a*b;
}

float getIntersection(M_ m0, M_ m1) {
    float x, y;
    if (m1.p2.x < m0.p1.x || m1.p1.x > m0.p2.x)           { std::cout << "Fora" << std::endl;           return 0;   }
    else if (m1.p2.x >= m0.p1.x && m1.p1.x <  m0.p1.x)    { std::cout << "Direita Entrou" << std::endl; x = m1.p2.x - m0.p1.x;  }
    else if (m1.p2.x >  m0.p2.x && m1.p1.x >= m0.p1.x)    { std::cout << "Direita saiu" << std::endl;   x = m0.p2.x - m1.p1.x;  }
    else if (m1.p2.x <  m0.p2.x && m1.p1.x >  m0.p1.x)    { std::cout << "Foi comido" << std::endl;     x = m1.p2.x - m1.p1.x;  }
    else if (m1.p2.x >= m0.p2.x && m1.p1.x <= m0.p1.x)    { std::cout << "Comeu" << std::endl;          x = m0.p2.x - m0.p1.x; }
    else x = m1.p2.x - m1.p1.x;

    if (m1.p2.y > m0.p2.y) {
        y = m0.p4.y - m0.p1.y;
    } else {
        y = m1.p4.y - m1.p1.y;
    }
    return x * y;
}

int FunnyPlot::func(int increment = 0) {
    cv::Mat img = cv::Mat::zeros(cv::Size(800, 800), CV_8UC3);          // Creates an image with a 800x800 dimension
    cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE);              // Gives the window a name

    m1.p1.x += increment;
    m1.p2.x += increment;
    m1.p3.x += increment;
    m1.p4.x += increment;

    std::vector<std::vector<cv::Point>> poly_1 = {{                     // Creates a polygon - Rectangle
        m0.p1, m0.p2, m0.p3, m0.p4
    }};

    std::vector<std::vector<cv::Point>> poly_2 = {{                     // Creates a polygon - Rectangle
        cv::Point2d(m1.p1.x, m1.p1.y),
        cv::Point2d(m1.p2.x, m1.p2.y),
        cv::Point2d(m1.p3.x, m1.p3.y),
        cv::Point2d(m1.p4.x, m1.p4.y)
    }};

    cv::polylines(img, poly_1, 1, cv::Scalar(  0,   0, 255), 3);
    cv::polylines(img, poly_2, 1, cv::Scalar(255,   0, 255), 3);

//  We have the polygons, ok! Now we need to find the intersection of them.
//  The intersection is a polygon itself, and it represents the area of overlap
//  between the both polygons of interest.
//  We can use the OpenCV function intersectConvexConvex to find that polygon.
//  It returns a boolean value indicating if the intersection was found or not.
//  --------------------------------------------------------------
    std::vector<cv::Point2f> intersection;
    std::vector<cv::Point2f> poly1 = {m0.p1, m0.p2, m0.p3, m0.p4};
    std::vector<cv::Point2f> poly2 = {m1.p1, m1.p2, m1.p3, m1.p4};
//  --------------------------------------------------------------
//  We have a Point2f vector, but we need a Point vector to fill the polygon.
//  The for is to convert the Point2f to Point.
    bool success = cv::intersectConvexConvex(poly1, poly2, intersection);
    if (success) {
        std::vector<cv::Point> intersection_int;
        intersection_int.resize(intersection.size());
        for(int i = 0; i < intersection.size(); i++) {
            intersection_int[i] = intersection[i];
        }
//  After the conversion, we can fill the polygon.
     // cv::fillConvexPoly(img, points, num_points, color, line_type, shift_position)
        cv::fillConvexPoly(img, intersection_int, cv::Scalar(255, 255, 0));
    }
//  --------------------------------------------------------------
//  Now we can calculate the area of the intersection polygon.
//  We use the OpenCV function contourArea to do that.
    double area = cv::contourArea(intersection);
    std::cout << "area: " << area << std::endl;

    float inter = getIntersection(m0, m1);
    std::cout << "inter: " << inter << std::endl;
    if (area > 1e9) area = 0;

    std::string text = "Intersection Area: " + std::to_string((int)area);
    cv::putText(img, text, cv::Point(50,50), cv::FONT_HERSHEY_SIMPLEX, 1, cv::Scalar(255,255,255), 2);
    cv::imshow("Display Image", img);
    int select = cv::waitKeyEx(0);

    return select;
}


 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    // cv::polylines(img, poly_1, 1, cv::Scalar(  0, 255, 255), 3);
    // cv::polylines(img, poly_2, 1, cv::Scalar(255,   0,   0), 3);
    // std::vector<cv::Point> poly_1 = {{300+increment,300}, {400+increment,400}};             // Creates a polygon - Line
    // std::vector<cv::Point> poly_2 = {{200,200}, {200,300}, {300,200}};  // Creates a polygon - Triangle

