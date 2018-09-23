//
// Created by ghkim on 18. 9. 24.
//

#include <iostream>
#include <functional>
#include <vector>

// header for random function
#include <ctime>
#include <random>

#include "test_functions.h"

// if VERBOSE true, print all vectors while run functions in test_functions.cpp
#define VERBOSE true


bool test_sum(){
    // for get random number
    const unsigned int seed = time(0);
    std::mt19937_64 rng(seed);
    std::uniform_int_distribution<int> unii(1, 50);
    int vector_size = unii(rng);
    //int vector_size = std::rand()/(RAND_MAX/100 + 1);

    const std::vector<double> a = linspace(0, vector_size - 1, vector_size);
    const std::vector<double> b = linspace(0, 2 * (vector_size - 1), vector_size);
    std::vector<double> sum_result = sum(a, b);
    if(VERBOSE) {
        std::cout << "vector size is " << vector_size << std::endl;
        std::cout << "a: ";
        print_vector(a);
        std::cout << "b: ";
        print_vector(b);
        std::cout << "sum(a, b): ";
        print_vector(sum_result);
    }
    if (sum_result == linspace(0, 3 * (vector_size - 1), vector_size)){
        return true;
    }
    else{
        return false;
    }
}

bool test_dot(){
    const unsigned int seed = time(0);
    std::mt19937_64 rng(seed);
    std::uniform_int_distribution<int> unii(1, 50);
    int vector_size = unii(rng);

    const std::vector<double> a = linspace(0, vector_size - 1, vector_size);
    const std::vector<double> b = linspace(0, 2 * (vector_size - 1), vector_size);
    double dot_result = dot(a, b);
    if(VERBOSE) {
        std::cout << "vector size is " << vector_size << std::endl;
        std::cout << "a: ";
        print_vector(a);
        std::cout << "b: ";
        print_vector(b);
        std::cout << "dot(a, b): " << dot_result << std::endl;
    }
    if (dot_result == (vector_size - 1) * (vector_size ) * (vector_size * 2 - 1) / 3){
        return true;
    }
    else{
        return false;
    }
}

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
