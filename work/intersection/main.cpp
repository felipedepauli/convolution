#include <opencv2/opencv.hpp>
#include <unistd.h>
#include <stdio.h>
#include <termios.h>
#include <iostream>
#include "./include/pretty_math.hpp"
#include "./include/funny_plot.hpp"

using namespace cv;
using std::cout;
using std::endl;
using std::cin;

// int func(int);

int main(int argc, char *argv[]) {

    Forms fs;
    fs.addForm(Form(atoi(argv[1]),atoi(argv[2]),atoi(argv[3]),atoi(argv[4])));
    fs.addForm(Form(atoi(argv[4]),atoi(argv[6]),atoi(argv[7]),atoi(argv[8])));

    FunnyPlot fp;
    fp.getObjects(fs);
    fp.plot(argc, argv[1]);

    return 0;
}





























// int main(int argc, char** argv)
// {
//     struct termios ttystate;
//     char c;
//     tcgetattr(STDIN_FILENO, &ttystate);
//     ttystate.c_lflag &= ~ICANON;
//     ttystate.c_cc[pmIN] = 1;
//     tcsetattr(STDIN_FILENO, TCSANOW, &ttystate);

//     uint8_t count = 0;

//     int select = func(0);
    
//     while(1) {
//         if (select == 97) {
//             std::cout << "a pressed" << std::endl;
//             select = func(++count);
//         } else if (select == 100) {
//             std::cout << "d pressed" << std::endl;
//             select = func(--count);
//         }
//     }
    
//     return 0;
// }


// int func(int increment = 0) {
//     cv::Mat img = cv::Mat::zeros(cv::Size(800, 800), CV_8UC3);          // Creates an image with a 800x800 dimension
//     cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE);              // Gives the window a name

//     std::vector<cv::Point> poly_1 = {{300,300+increment}, {400,400+increment}};             // Creates a polygon - Line
//     std::vector<cv::Point> poly_2 = {{200,200}, {200,300}, {300,200}};  // Creates a polygon - Triangle

//     std::vector<std::vector<cv::Point>> poly_3 = {{                     // Creates a polygon - Rectangle
//         {400,400}, {500,400}, {500,500}, {400,500}
//     }};

//     cv::polylines(img, poly_1, 1, cv::Scalar(  0, 255, 255), 3);
//     cv::polylines(img, poly_2, 1, cv::Scalar(255,   0,   0), 3);
//     cv::polylines(img, poly_3, 1, cv::Scalar(  0,   0, 255), 3);

//     cv::imshow("Display Image", img);
//     return cv::waitKey();
// }