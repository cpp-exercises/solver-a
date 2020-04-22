//
//  Demo.cpp
//  operatorOverload
//
//  First version by Adam Lev-Ari on 29/12/2019.
//  Second version by Erel Segal-Halevi on 22/04/2020.
//

#include <iostream>
#include <complex>
#include "solver.hpp"

using namespace std;

int main(){
    solver::RealVariable x;

    double xvalue = solver::solve(2*x-4 == 10);
    cout << xvalue << endl;  // 7

    cout << solver::solve((x^2) == 16) << endl;   // 4 or -4
    cout << solver::solve((x^2) == -16) << endl;  // exception: no real solution
    cout << solver::solve((x^2) + 2*x + 4 == 20 + 6*x/2 - x) << endl;   // 4 or -4

    solver::ComplexVariable y;
    std::complex yvalue = solver::solve(2*y-4 == 10);
    cout << yvalue << endl;  // 7+0i  (can be in any format)

    cout << solver::solve((y^2) == 16) << endl;   // 4+0i or -4+0i
    cout << solver::solve((y^2) == -16) << endl;  // 0+4i or 0-4i
    cout << solver::solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y) << endl;   // 4+0i or -4+0i
    cout << solver::solve(y+5i == 2*y+3i) << endl;   // 0+2i

    return 0;
}
