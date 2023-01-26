#pragma once
#include <opencv2/opencv.hpp>
#include "../include/pretty_math.hpp"
#include <vector>
#include <memory>
#include <string>

typedef struct M_ {
    cv::Point2f p1;
    cv::Point2f p2;
    cv::Point2f p3;
    cv::Point2f p4;
} M_;

class FunnyPlot {
    private:     
        std::vector<std::shared_ptr<Form>> forms;
        int func(int);
        M_ m0;
        M_ m1;
    public:
        FunnyPlot();
        void getObjects(Forms &fs);
        int plot(int argc, std::string file);
};
