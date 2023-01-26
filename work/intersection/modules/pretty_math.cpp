#include "../include/pretty_math.hpp"
#include <iostream>
#include <unordered_map>
#include <string>

PrettyMath::PrettyMath(){

}
int PrettyMath::add(int a, int b){
    return a + b;
}
int PrettyMath::subtract(int a, int b){
    return a - b;
}
int PrettyMath::multiply(int a, int b){
    return a * b;
}
float PrettyMath::divide(int a, int b){
    return (float)a / (float)b;
}

std::unordered_map<std::string, int> options = {
    {"add"      , 0},
    {"subtract" , 1},
    {"multiply" , 2},
    {"divide"   , 3}
};
float PrettyMath::getArea(int i){
    return 0;
}

float PrettyMath::multiplyAreas() {
    return getArea(0) * getArea(1);
}

float PrettyMath::params(std::string select, int a, int b){
    float r = -1;
    switch(options[select]){
        case 0: r = add(a, b);      break;
        case 1: r = subtract(a, b); break;
        case 2: r = multiply(a, b); break;
        case 3: r = divide(a, b);   break;
        default:std::cout << "Invalid selection" << std::endl; break;
    }
    return r;
}
