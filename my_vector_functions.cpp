//
// Created by ghkim on 18. 9. 20.
//

#include <vector>
#include "my_vector_functions.h"


std::vector<double> sum(const std::vector<double> &a, const std::vector<double> &b){
    std::vector<double> z(a.size());
    for(int i = 0; i < a.size(); ++i){
        z[i] = a[i] + b[i];
    }
    return z;
}
double dot(const std::vector<double> &a, const std::vector<double> &b){

}
std::vector<double> linspace(const std::vector<double> &start, const std::vector<double> &stop, const int &num_points){

}
double integrate(const std::vector<double> &x, const std::vector<double> &y){

}
