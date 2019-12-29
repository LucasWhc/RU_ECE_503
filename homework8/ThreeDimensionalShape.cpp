//
// Created by Lucas on 2019/10/26.
//

#include "ThreeDimensionalShape.h"
#include <iostream>

using namespace std;

ThreeDimensionalShape::ThreeDimensionalShape() {}

void ThreeDimensionalShape::print3D() const {
    cout << "(" << Shape::getx() << "," << Shape::gety() << "," << Shape::getz() << ")" << endl;
}