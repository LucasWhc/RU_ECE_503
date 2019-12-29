//
// Created by Lucas on 2019/10/26.
//

#include "Triangle.h"
#include <iostream>
#include <cmath>

using namespace std;

Triangle::Triangle() {
    setedge(0.0);
}

double Triangle::getedge() const {
    return edge;
}

void Triangle::setedge(double edgein) {
    edge = edgein;
}

double Triangle::getarea() const {
    return sqrt(3.0) / 4.0 * getedge() * getedge();
}

void Triangle::print() const {
    cout << "The triangle with edge " << getedge() << " that is located at ";
    TwoDimensionalShape::print2D();
    cout << " has:" << endl;
    cout << "An area of " << getarea() << endl;
}