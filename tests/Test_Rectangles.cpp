#include <gtest/gtest.h>
#include "../work/intersection/include/pretty_math.hpp"

TEST(Test_Rectangle, testingXo) {
    Form f(0, 0, 100, 100);     EXPECT_EQ(f.getXo(), 0);
    f.setXo(100);               EXPECT_EQ(f.getXo(), 100);
    f.setXo(200);               EXPECT_EQ(f.getXo(), 200);
    f.setXo(300);               EXPECT_EQ(f.getXo(), 300);
    f.setXo(400);               EXPECT_EQ(f.getXo(), 400);
    f.setXo(500);               EXPECT_EQ(f.getXo(), 500);
    f.setXo(600);               EXPECT_EQ(f.getXo(), 600);
    f.setXo(500);               EXPECT_EQ(f.getXo(), 500);
    f.setXo(400);               EXPECT_EQ(f.getXo(), 400);
    f.setXo(300);               EXPECT_EQ(f.getXo(), 300);
    f.setXo(200);               EXPECT_EQ(f.getXo(), 200);
    f.setXo(100);               EXPECT_EQ(f.getXo(), 100);
    f.setXo(0);                 EXPECT_EQ(f.getXo(), 0);
}
TEST(Test_Rectangle, testingYo) {
    Form f(0, 0, 100, 100);     EXPECT_EQ(f.getYo(), 0);
    f.setYo(100);               EXPECT_EQ(f.getYo(), 100);
    f.setYo(200);               EXPECT_EQ(f.getYo(), 200);
    f.setYo(300);               EXPECT_EQ(f.getYo(), 300);
    f.setYo(400);               EXPECT_EQ(f.getYo(), 400);
    f.setYo(500);               EXPECT_EQ(f.getYo(), 500);
    f.setYo(600);               EXPECT_EQ(f.getYo(), 600);
    f.setYo(500);               EXPECT_EQ(f.getYo(), 500);
    f.setYo(400);               EXPECT_EQ(f.getYo(), 400);
    f.setYo(300);               EXPECT_EQ(f.getYo(), 300);
    f.setYo(200);               EXPECT_EQ(f.getYo(), 200);
    f.setYo(100);               EXPECT_EQ(f.getYo(), 100);
    f.setYo(0);                 EXPECT_EQ(f.getYo(), 0);
}
TEST(Test_Rectangle, testingWidth) {
    Form f(0, 0, 100, 100);     EXPECT_EQ(f.getWidth(), 100);
    f.setWidth(100);            EXPECT_EQ(f.getWidth(), 100);
    f.setWidth(200);            EXPECT_EQ(f.getWidth(), 200);
    f.setWidth(300);            EXPECT_EQ(f.getWidth(), 300);
    f.setWidth(400);            EXPECT_EQ(f.getWidth(), 400);
    f.setWidth(500);            EXPECT_EQ(f.getWidth(), 500);
    f.setWidth(600);            EXPECT_EQ(f.getWidth(), 600);
    f.setWidth(500);            EXPECT_EQ(f.getWidth(), 500);
    f.setWidth(400);            EXPECT_EQ(f.getWidth(), 400);
    f.setWidth(300);            EXPECT_EQ(f.getWidth(), 300);
    f.setWidth(200);            EXPECT_EQ(f.getWidth(), 200);
    f.setWidth(100);            EXPECT_EQ(f.getWidth(), 100);
    f.setWidth(0);              EXPECT_EQ(f.getWidth(), 0);
}
TEST(Test_Rectangle, testingWidthChangingXo) {
    Form f(0, 0, 100, 200);     EXPECT_EQ(f.getWidth(), 100);
    f.setXo(100);               EXPECT_EQ(f.getWidth(), 100);
    f.setXo(200);               EXPECT_EQ(f.getWidth(), 100);
    f.setXo(300);               EXPECT_EQ(f.getWidth(), 100);
    f.setXo(400);               EXPECT_EQ(f.getWidth(), 100);
    f.setXo(500);               EXPECT_EQ(f.getWidth(), 100);
    f.setXo(600);               EXPECT_EQ(f.getWidth(), 100);
    f.setXo(500);               EXPECT_EQ(f.getWidth(), 100);
    f.setXo(400);               EXPECT_EQ(f.getWidth(), 100);
    f.setXo(300);               EXPECT_EQ(f.getWidth(), 100);
    f.setXo(200);               EXPECT_EQ(f.getWidth(), 100);
    f.setXo(100);               EXPECT_EQ(f.getWidth(), 100);
    f.setXo(0);                 EXPECT_EQ(f.getWidth(), 100);
}
TEST(Test_Rectangle, testingWidthChangingYo) {
    Form f(0, 0, 100, 200);     EXPECT_EQ(f.getWidth(), 100);
    f.setYo(100);               EXPECT_EQ(f.getWidth(), 100);
    f.setYo(200);               EXPECT_EQ(f.getWidth(), 100);
    f.setYo(300);               EXPECT_EQ(f.getWidth(), 100);
    f.setYo(400);               EXPECT_EQ(f.getWidth(), 100);
    f.setYo(500);               EXPECT_EQ(f.getWidth(), 100);
    f.setYo(600);               EXPECT_EQ(f.getWidth(), 100);
    f.setYo(500);               EXPECT_EQ(f.getWidth(), 100);
    f.setYo(400);               EXPECT_EQ(f.getWidth(), 100);
    f.setYo(300);               EXPECT_EQ(f.getWidth(), 100);
    f.setYo(200);               EXPECT_EQ(f.getWidth(), 100);
    f.setYo(100);               EXPECT_EQ(f.getWidth(), 100);
    f.setYo(0);                 EXPECT_EQ(f.getWidth(), 100);
}
TEST(Test_Rectangle, testingHeightChangingXo) {
    Form f(0, 0, 100, 200);     EXPECT_EQ(f.getHeight(), 200);
    f.setXo(100);               EXPECT_EQ(f.getHeight(), 200);
    f.setXo(200);               EXPECT_EQ(f.getHeight(), 200);
    f.setXo(300);               EXPECT_EQ(f.getHeight(), 200);
    f.setXo(400);               EXPECT_EQ(f.getHeight(), 200);
    f.setXo(500);               EXPECT_EQ(f.getHeight(), 200);
    f.setXo(600);               EXPECT_EQ(f.getHeight(), 200);
    f.setXo(500);               EXPECT_EQ(f.getHeight(), 200);
    f.setXo(400);               EXPECT_EQ(f.getHeight(), 200);
    f.setXo(300);               EXPECT_EQ(f.getHeight(), 200);
    f.setXo(200);               EXPECT_EQ(f.getHeight(), 200);
    f.setXo(100);               EXPECT_EQ(f.getHeight(), 200);
    f.setXo(0);                 EXPECT_EQ(f.getHeight(), 200);
}
TEST(Test_Rectangle, testingHeightChangingYo) {
    Form f(0, 0, 100, 200);     EXPECT_EQ(f.getHeight(), 200);
    f.setYo(100);               EXPECT_EQ(f.getHeight(), 200);
    f.setYo(200);               EXPECT_EQ(f.getHeight(), 200);
    f.setYo(300);               EXPECT_EQ(f.getHeight(), 200);
    f.setYo(400);               EXPECT_EQ(f.getHeight(), 200);
    f.setYo(500);               EXPECT_EQ(f.getHeight(), 200);
    f.setYo(600);               EXPECT_EQ(f.getHeight(), 200);
    f.setYo(500);               EXPECT_EQ(f.getHeight(), 200);
    f.setYo(400);               EXPECT_EQ(f.getHeight(), 200);
    f.setYo(300);               EXPECT_EQ(f.getHeight(), 200);
    f.setYo(200);               EXPECT_EQ(f.getHeight(), 200);
    f.setYo(100);               EXPECT_EQ(f.getHeight(), 200);
    f.setYo(0);                 EXPECT_EQ(f.getHeight(), 200);
}
TEST(Test_Rectangle, testingXoChangingWidth) {
    Form f(0, 10, 100, 200);    EXPECT_EQ(f.getXo(), 0);
    f.setWidth(100);            EXPECT_EQ(f.getXo(), 0);
    f.setWidth(200);            EXPECT_EQ(f.getXo(), 0);
    f.setWidth(300);            EXPECT_EQ(f.getXo(), 0);
    f.setWidth(400);            EXPECT_EQ(f.getXo(), 0);
    f.setWidth(500);            EXPECT_EQ(f.getXo(), 0);
    f.setWidth(600);            EXPECT_EQ(f.getXo(), 0);
    f.setWidth(500);            EXPECT_EQ(f.getXo(), 0);
    f.setWidth(400);            EXPECT_EQ(f.getXo(), 0);
    f.setWidth(300);            EXPECT_EQ(f.getXo(), 0);
    f.setWidth(200);            EXPECT_EQ(f.getXo(), 0);
    f.setWidth(100);            EXPECT_EQ(f.getXo(), 0);
    f.setWidth(0);              EXPECT_EQ(f.getXo(), 0);
}
TEST(Test_Rectangle, testingYoChangingWidth) {
    Form f(0, 10, 100, 200);    EXPECT_EQ(f.getYo(), 10);
    f.setWidth(100);            EXPECT_EQ(f.getYo(), 10);
    f.setWidth(200);            EXPECT_EQ(f.getYo(), 10);
    f.setWidth(300);            EXPECT_EQ(f.getYo(), 10);
    f.setWidth(400);            EXPECT_EQ(f.getYo(), 10);
    f.setWidth(500);            EXPECT_EQ(f.getYo(), 10);
    f.setWidth(600);            EXPECT_EQ(f.getYo(), 10);
    f.setWidth(500);            EXPECT_EQ(f.getYo(), 10);
    f.setWidth(400);            EXPECT_EQ(f.getYo(), 10);
    f.setWidth(300);            EXPECT_EQ(f.getYo(), 10);
    f.setWidth(200);            EXPECT_EQ(f.getYo(), 10);
    f.setWidth(100);            EXPECT_EQ(f.getYo(), 10);
    f.setWidth(0);              EXPECT_EQ(f.getYo(), 10);
}
TEST(Test_Rectangle, testingXoChangingHeight) {
    Form f(0, 10, 100, 200);    EXPECT_EQ(f.getXo(), 0);
    f.setHeight(100);            EXPECT_EQ(f.getXo(), 0);
    f.setHeight(200);            EXPECT_EQ(f.getXo(), 0);
    f.setHeight(300);            EXPECT_EQ(f.getXo(), 0);
    f.setHeight(400);            EXPECT_EQ(f.getXo(), 0);
    f.setHeight(500);            EXPECT_EQ(f.getXo(), 0);
    f.setHeight(600);            EXPECT_EQ(f.getXo(), 0);
    f.setHeight(500);            EXPECT_EQ(f.getXo(), 0);
    f.setHeight(400);            EXPECT_EQ(f.getXo(), 0);
    f.setHeight(300);            EXPECT_EQ(f.getXo(), 0);
    f.setHeight(200);            EXPECT_EQ(f.getXo(), 0);
    f.setHeight(100);            EXPECT_EQ(f.getXo(), 0);
    f.setHeight(0);              EXPECT_EQ(f.getXo(), 0);
}
TEST(Test_Rectangle, testingYoChangingHeight) {
    Form f(0, 10, 100, 200);    EXPECT_EQ(f.getYo(), 10);
    f.setHeight(100);            EXPECT_EQ(f.getYo(), 10);
    f.setHeight(200);            EXPECT_EQ(f.getYo(), 10);
    f.setHeight(300);            EXPECT_EQ(f.getYo(), 10);
    f.setHeight(400);            EXPECT_EQ(f.getYo(), 10);
    f.setHeight(500);            EXPECT_EQ(f.getYo(), 10);
    f.setHeight(600);            EXPECT_EQ(f.getYo(), 10);
    f.setHeight(500);            EXPECT_EQ(f.getYo(), 10);
    f.setHeight(400);            EXPECT_EQ(f.getYo(), 10);
    f.setHeight(300);            EXPECT_EQ(f.getYo(), 10);
    f.setHeight(200);            EXPECT_EQ(f.getYo(), 10);
    f.setHeight(100);            EXPECT_EQ(f.getYo(), 10);
    f.setHeight(0);              EXPECT_EQ(f.getYo(), 10);
}
TEST(Test_Rectangle, settingAndGettingRectValues) {
    Form f(0, 10, 100, 200);
    f.getRectValues();
    EXPECT_EQ(f.getXo(), 0);
    EXPECT_EQ(f.getYo(), 10);
    EXPECT_EQ(f.getX(), 100);
    EXPECT_EQ(f.getY(), 210);

    f.setRectValues(0, 10, 300, 200);
    f.getRectValues();
    EXPECT_EQ(f.getXo(), 0);
    EXPECT_EQ(f.getYo(), 10);
    EXPECT_EQ(f.getX(), 300);
    EXPECT_EQ(f.getY(), 210);
    
    f.setRectValues(10, 10, 200, 200);
    f.getRectValues();
    EXPECT_EQ(f.getXo(), 10);
    EXPECT_EQ(f.getYo(), 10);
    EXPECT_EQ(f.getX(), 210);
    EXPECT_EQ(f.getY(), 210);

    f.setRectValues(0, 0, 100, 100);
    f.getRectValues();
    EXPECT_EQ(f.getXo(), 0);
    EXPECT_EQ(f.getYo(), 0);
    EXPECT_EQ(f.getX(), 100);
    EXPECT_EQ(f.getY(), 100);
}
