#include "../include/pretty_math.hpp"

// class Form {
//     private:
//         int xo;
//         int yo;
//         int width;
//         int height;

Form::Form(){}
Form::Form(int xo, int yo, int width_, int height_){
    points.push_back(cv::Point2d(xo, yo));
    points.push_back(cv::Point2d(xo + width_, yo + height_));
    width = width_;
    height = height_;
}
int Form::getXo(){
    return points[0].x;
}
int Form::getYo(){
    return points[0].y;
}
int Form::getX(){
    return points[1].x;
}
int Form::getY(){
    return points[1].y;
}
int Form::getWidth(){
    return width;
}
int Form::getHeight(){
    return height;
}
void Form::setXo(int xo){
    points[0].x = xo;
}
void Form::setYo(int yo){
    points[0].y = yo;
}
void Form::setWidth(int width_){
    points[1].x = points[0].x + width_;
    width = width_;
}
void Form::setHeight(int height_){
    points[1].y = points[0].y + height_;
    height = height_;
}
void Form::setRectValues(int xo, int yo, int width_, int height_){
    points[0].x = xo;
    points[0].y = yo;
    points[1].x = xo + width_;
    points[1].y = yo + height_;
    width = width_;
    height = height_;
}
void Form::getRectValues() {
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Po:\t(" << points[0].x << ","<< points[0].y << ")" << std::endl;
    std::cout << "P_:\t(" << points[1].x << ","<< points[1].y << ")" << std::endl;
    std::cout << "Width:\t" << width << std::endl;
    std::cout << "Height:\t" << height << std::endl;
}

std::vector<cv::Point2d> Form::getPoints(){
    return points;
}