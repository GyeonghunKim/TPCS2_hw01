//
// Created by ghkim on 18. 9. 20.
//

#ifndef HW01_MY_VECTOR_FUNCTIONS_H
#define HW01_MY_VECTOR_FUNCTIONS_H

#include <iostream>
#include <vector>

std::vector<double> sum(const std::vector<double> &a, const std::vector<double> &b);
double dot(const std::vector<double> &a, const std::vector<double> &b);
std::vector<double> linspace(const std::vector<double> &start, const std::vector<double> &stop, const int &num_points);
double integrate(const std::vector<double> &x, const std::vector<double> &y);

#endif //HW01_MY_VECTOR_FUNCTIONS_H
