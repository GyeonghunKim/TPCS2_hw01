//
// Created by ghkim on 18. 9. 20.
//
//  SNU-ID: 2016-16746
//
//  Homework 01
//
//
//  header for test functions
//
//  answer of questions
//  a)
//  for every functions, I can check is there a nan in return value
//  or for sum, dot, integrate test, I can check size of two input vector is same
//
//  b)
//  test_sum()
//  false positive: No false positive
//  false negative: When two input vector has different size, sum() return wrong output because sum of two different size vector is not well defined.
//                  but, test_sum() said sum() pass the test.

//  test_dot()
//  false positive: No false positive
//  false negative: When two input vector has different size, dot() return wrong output because dot product of two different size vector is not well defined.
//                  but, test_dot() said dot() pass the test.
//
//  test_linspace()
//  false positive: No false positive
//  false negative: When size of output vector is larger than input variable "vector_size", linspace() will pass the test_linspace().
//                  for example, if output is [0, 1, 2, 3] for input (0 ,2, 3), test_linspace() will say linspace() pass the test.
//
//  test_integrate()
//  false positive: No false positive
//  false negative: When two input vector has different size, integrate() return wrong output because integration is not well defined in this case.
//                  but, test_integrate() said integrate() pass the test.
//
//
//  Details about function is commented in test_functions.cpp file
//

#ifndef HW01_TEST_FUNCTIONS_H
#define HW01_TEST_FUNCTIONS_H

#include <iostream>
#include <functional>
#include <vector>
#include "my_vector_functions.h"


//
// test sum()
bool test_sum();

//
// test dot()
bool test_dot();

//
// test linspace()
bool test_linspace();

//
// test integral()
bool test_integrate();

//
// function for run test
bool run_test(std::function<bool(void)> func, const std::string& function_name);

//
// run all tests
bool run_all_tests();




#endif //HW01_TEST_FUNCTIONS_H
