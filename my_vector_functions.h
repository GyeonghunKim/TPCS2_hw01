//
// Created by ghkim on 18. 9. 20.
//

#ifndef HW01_MY_VECTOR_FUNCTIONS_H
#define HW01_MY_VECTOR_FUNCTIONS_H

#include <iostream>
#include <vector>
//
// return sum of two input vectors
std::vector<double> sum(const std::vector<double> &a, const std::vector<double> &b);

//
//  return dot product fo two input vectors
double dot(const std::vector<double> &a, const std::vector<double> &b);

//
//  generate vector with linear spaced value with start value, stop value and number of points
std::vector<double> linspace(const std::vector<double> &start, const std::vector<double> &stop, const int &num_points);

//
//  return integrate data with trapezoidal methods
double integrate(const std::vector<double> &x, const std::vector<double> &y);

#endif //HW01_MY_VECTOR_FUNCTIONS_H
