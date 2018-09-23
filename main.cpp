#include <iostream>
#include <vector>
#include "my_vector_functions.h"
#include "test_functions.h"

int main() {
    const std::vector<double> a = linspace(0, 10, 11);
    const std::vector<double> b = linspace(0, 20, 11);
    print_vector(a);
    print_vector(b);
    std::vector<double> sum_result = sum(a, b);
    std::cout << "sum product result: ";
    print_vector(sum_result);
    double dot_result = dot(a, b);
    std::cout << "dot product result: " << dot_result << std::endl;
    double inte_result = integrate(a, b);
    std::cout << "integral product result: " << inte_result << std::endl;

    std::cout << "**************test function sum**********************" << std::endl;
    run_test(test_sum, "test_sum");

    std::cout << "**************test function dot**********************" << std::endl;
    run_test(test_dot, "test_dot");

    std::cout << "**************test function linspace**********************" << std::endl;
    run_test(test_linspace, "test_linspace");

}