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



bool test_sum(){

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
