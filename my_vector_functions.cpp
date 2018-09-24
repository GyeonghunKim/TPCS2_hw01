//
// Created by ghkim on 18. 9. 20.
//
//  SNU-ID: 2016-16746
//
//  Homework 01
//
//
//  cpp file for my vector functions (print, sum, dot product, integrate)
//


#include <vector>
#include "my_vector_functions.h"

//
// print vector with form [a, b, ..., c]
// example:
// std::cout << "a: ";
// print_vector(a)
// =>   a: [1, 2, 3, 4]
void print_vector(const std::vector<double> &a){
    std::cout << "[";
    for(int i = 0; i < a.size(); ++i){
        std::cout << a[i] << "\t";
    }
    std::cout <<"]"<<std::endl;
}

//
// return sum of two input vectors
// add two vectors
// you should input two "same size" vectors.
std::vector<double> sum(const std::vector<double> &a, const std::vector<double> &b){
    std::vector<double> z(a.size());
    for(int i = 0; i < a.size(); ++i){
        z[i] = a[i] + b[i];
    }
    return z;
}

//
// return dot product fo two input vectors
// first I initialize "result" with 0, and add multiply of two vector's i th component from i = 0 to i = vector's size
// you should input two "same size" vectors.
double dot(const std::vector<double> &a, const std::vector<double> &b){
    double result = 0.0;
    for(int i = 0; i < a.size(); ++i){
        result += a[i]*b[i];
    }
    return result;
}

//
//  generate vector with linear spaced value with start value, stop value and number of points
//  first I initialize vector with "z" with size "num_points"
//  interval of value is (stop - start)/(num_points - 1)
//  I add (interval *i) to start value to get i th value of vector
std::vector<double> linspace(const double &start, const double &stop, const int &num_points){
    std::vector<double> z(num_points);
    for(int i = 0; i < num_points; ++i){
        z[i] = start + i * (stop - start)/(num_points - 1);
    }
    return z;

}

//
//  return integrate data with trapezoidal methods
//  first I initialize "result" with 0, and add area of trapezoid
double integrate(const std::vector<double> &x, const std::vector<double> &y){
    double result = 0;
    for(int i = 1; i < x.size(); ++i){
        result += (y[i] + y[i-1]) * (x[i] - x[i-1]) / 2;
    }
    return result;
}
