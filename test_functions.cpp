//
// Created by ghkim on 18. 9. 24.
//
//  SNU-ID: 2016-16746
//
//  Homework 01
//
//
//  cpp file for test functions
//  I want to test functions with random size vector in range 1 to 50
//  So I searched internet and I found std::mt19937_64 and std::uniform_int_distribution. I use them in my testfunctions.
//
//
//  I use linspace in my testfunctions. So in run_all_tests(), I test linspace() first.
//
//  run_test() and run_all_test() refer to Eric's code

#include <iostream>
#include <functional>
#include <vector>
#include <string>
// header for random function
#include <ctime>
#include <random>

#include "test_functions.h"

// if VERBOSE true, print all vectors while run functions in test_functions.cpp
#define VERBOSE false

// test sum() in myvectorfunction
// I create vector 'a' and 'b'  with constant interval.
// Interval of b is 2 times latger than interval of a. So b = 2 * a
// This function checks sum(a, b) == 3 * a

bool test_sum(){
    // get random number
    const unsigned int seed = time(0);
    std::mt19937_64 rng(seed);
    std::uniform_int_distribution<int> unii(1, 50);
    int vector_size = unii(rng);
    //int vector_size = std::rand()/(RAND_MAX/100 + 1); CLion told me this is not good method.

    const std::vector<double> a = linspace(0, vector_size - 1, vector_size);
    const std::vector<double> b = linspace(0, 2 * (vector_size - 1), vector_size);  // b = 2 * a

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

    // check sum(a, b) == 3 * a
    if (sum_result == linspace(0, 3 * (vector_size - 1), vector_size)){
        return true;
    }
    else{
        return false;
    }
}


// test dot() in myvectorfunction
// I create vector 'a' and 'b'  with constant interval.
// Interval of b is 2 times latger than interval of a. So b = 2 * a
// This function check dot (a, b) == (vector_size - 1) * (vector_size ) * (vector_size * 2 - 1) / 3
//
bool test_dot(){
    // get random number
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
    // check dot product result is same with (vector_size - 1) * (vector_size ) * (vector_size * 2 - 1) / 3
    if (dot_result == (vector_size - 1) * (vector_size ) * (vector_size * 2 - 1) / 3){
        return true;
    }
    else{
        return false;
    }
}

// test linspace() in myvectorfunction
// I create vector 'lin_test' using function linspace whose end value is vector_size - 1.
// So interval of 'lin_test' is 1
// I check interval of 'lin_test' is 1

bool test_linspace(){
    // get random number
    const unsigned int seed = time(0);
    std::mt19937_64 rng(seed);
    std::uniform_int_distribution<int> unii(1, 50);
    int vector_size = unii(rng);
    bool isTrue = true;
    const std::vector<double> lin_test = linspace(0, vector_size - 1, vector_size);
    // check all values in "lin_test" has same interval 1
    for(int i = 0; i < vector_size; ++i){
        if(lin_test[i] != i){
            isTrue = false;
            break;
        }
    }
    if(VERBOSE) {
        std::cout << "vector size is " << vector_size << std::endl;
        std::cout << "linspace(0," << vector_size - 1 << "," << vector_size << ") : ";
        print_vector(lin_test);

    }

    if (isTrue){
        return true;
    }
    else{
        return false;
    }

}

// test integrate() in myvectorfunction
// I create vector 'a' and 'b'  with constant interval.
// Interval of b is 2 times latger than interval of a. So b = 2 * a
// return value of integrate(a, b) should be area of triangle 0.5 * (vector_size - 1)* (2 * (vector_size - 1))
// I check return value is same with area of triangle
bool test_integrate(){
    // get random number
    const unsigned int seed = time(0);
    std::mt19937_64 rng(seed);
    std::uniform_int_distribution<int> unii(1, 50);
    int vector_size = unii(rng);

    const std::vector<double> a = linspace(0, vector_size - 1, vector_size);
    const std::vector<double> b = linspace(0, 2 * (vector_size - 1), vector_size);
    double integrate_result = integrate(a, b);
    if(VERBOSE) {
        std::cout << "vector size is " << vector_size << std::endl;
        std::cout << "a: ";
        print_vector(a);
        std::cout << "b: ";
        print_vector(b);
        std::cout << "integrage(a, b): " << integrate_result << std::endl;
    }
    // check integrate_result is same with area of triangle
    if (integrate_result == (vector_size - 1)*(vector_size - 1)){
        return true;
    }
    else{
        return false;
    }
}

// function which run test and print result
// I refer to Eric's code
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

// function which run all 4 tests and print result
// I refer to Eric's code

bool run_all_tests(){
    std::vector<bool> results;
    // test four functions
    results.push_back(run_test(test_linspace, "test_linspace"));
    results.push_back(run_test(test_sum, "test_sum"));
    results.push_back(run_test(test_dot, "test_dot"));
    results.push_back(run_test(test_integrate, "test_integrate"));

    bool one_is_false = false;

    // print which is passed and which is failed
    for (int i = 0; i<4; ++i){
        if(!results[i]){ one_is_false = true; }
    }
    // print all test passed or some test failed
    if(!one_is_false){
        std::cout <<"**************all test passed!!****************";
    }
    else{
        std::cout <<"**************some test failed!!****************";
    }

}

