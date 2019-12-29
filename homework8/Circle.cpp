//
// Created by Lucas on 2019/10/26.
//

#include "Circle.h"
#include <iostream>

using namespace std;

Circle::Circle() {
    setr(0.0);
}

double Circle::getr() const {
    return r;
}

void Circle::setr(double rin) {
    r = rin;
}

double Circle::getarea() const {
    return 3.14159 * getr() * getr();
}

void Circle::print() const {
    cout << "The circle with radius " << getr() << " that is located at ";
    TwoDimensionalShape::print2D();
    cout << " has:" << endl;
    cout << "An area of " << getarea() << endl;
}