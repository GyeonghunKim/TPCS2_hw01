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
    double result = 0.0;
    for(int i = 0; i < a.size(); ++i){
        result += a[i]*b[i];
    }
    return result;
}
std::vector<double> linspace(const double &start, const double &stop, const int &num_points){
    std::vector<double> z(num_points);
    for(int i = 0; i < num_points; ++i){
        z[i] = start + i * (stop - start)/(num_points - 1);
    }
    return z;

}
double integrate(const std::vector<double> &x, const std::vector<double> &y){
    double result = 0;
    for(int i = 1; i < x.size(); ++i){
        result += (y[i] + y[i-1]) * (x[i] - x[i-1]) / 2;
    }
    return result;
}
