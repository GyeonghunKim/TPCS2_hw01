//
// Created by ghkim on 18. 9. 24.
//

#include <iostream>
#include <functional>
#include <vector>

// header for random function
#include <cstdlib>
#include <ctime>

#include "test_functions.h"

// if VERBOSE true, print all vectors while run functions in test_functions.cpp
#define VERBOSE false


bool test_sum(){
    int vector_size = std::rand()/(RAND_MAX/100 + 1);
    std::cout << vector_size << std::endl;
    const std::vector<double> a = linspace(0, vector_size - 1, vector_size);
    const std::vector<double> b = linspace(0, 2 * (vector_size - 1), vector_size);
    std::vector<double> sum_result = sum(a, b);
    if(VERBOSE) {
        print_vector(a);
        print_vector(b);
        print_vector(sum_result);
    }
    if (sum_result == linspace(0, 3 * (vector_size - 1), vector_size)){
        return true;
    }
    else{
        return false;
    }
}
//bool test_dot()

//bool test_linspace()
//bool test_integrate()
bool run_test(std::function<bool(void)> func, const std::string& function_name){
    bool isTrue = func();
    if (isTrue){
        std::cout << "test passed -> " << function_name << "\n";
    }
    else{
        std::cout << "test failed -> " << function_name << "\n";
    }
    return isTrue;
}
//bool run_all_tests()
