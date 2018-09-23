//
// Created by ghkim on 18. 9. 20.
// test functions in my_vector_functions_h
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
