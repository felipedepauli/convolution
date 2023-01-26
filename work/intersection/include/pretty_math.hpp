#pragma once
#include <string>
#include <vector>
#include <opencv2/opencv.hpp>
#include <memory>

class PrettyMath {
    private:
        int a;
        int b;
    public:
        PrettyMath();
        static int add(int a, int b);
        static int subtract(int a, int b);
        static int multiply(int a, int b);
        static float divide(int a, int b);
        static float params(std::string, int a, int b);
        static float multiplyAreas();
        static float getArea(int i);
};

class Form {
    private:
        uint8_t id;
        int     width;
        int     height;
        std::vector<cv::Point2d> points;
    public:
        Form();
        Form(int xo, int yo, int width, int height);
        int  getXo();
        int  getYo();
        int  getX();
        int  getY();
        int  getWidth();
        int  getHeight();
        void setXo(int xo);
        void setYo(int yo);
        void setWidth(int width);
        void setHeight(int height);
        void setRectValues(int xo, int yo, int width_, int height_);
        void getRectValues();
        std::vector<cv::Point2d> getPoints();
};

class Forms {
    private:
    public:
        std::vector<std::shared_ptr<Form>> forms;
        Forms();
        int countForms();
        int addForm(Form f);
        std::shared_ptr<Form> getForm(int);
};
