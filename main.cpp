#include <iostream>
#include <vector>
#include "my_vector_functions.h"
int main() {
    std::vector<double> a = linspace(0, 10, 11);
    std::vector<double> b = linspace(0, 20, 11);
    print_vector(a);
    print_vector(b);
    std::vector<double> sum_result = sum(a, b);
    std::cout << "sum product result: ";
    print_vector(sum_result);
    double dot_result = dot(a, b);
    std::cout << "dot product result: " << dot_result << std::endl;
    double inte_result = integrate(a, b);
    std::cout << "integral product result: " << inte_result << std::endl;


    //test problem 1

}