//
//  Demo.cpp
//  operatorOverload
//
//  Created by Adam Lev-Ari on 29/12/2019.
//  Copyright © 2019 Adam Lev-Ari. All rights reserved.
//


#include <iostream>
#include "solver.hpp"

using namespace std;

int main(){
    solver::Variable x;
    
    solve(2*x-4 == 10);
    cout << x << endl;     // x = 7

    solve((x^2) == 16);
    cout << x << endl;     // x = 4 

    solve((2*x^2) - 4*x + 3 == 9);
    cout << x << endl;     

    solve((x^2) + 6*x == -9);
    cout << x << endl;

    return 0;
}
