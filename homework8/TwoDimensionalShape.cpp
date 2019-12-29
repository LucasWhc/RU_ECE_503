//
// Created by Lucas on 2019/10/26.
//

#include "TwoDimensionalShape.h"
#include <iostream>

using namespace std;

TwoDimensionalShape::TwoDimensionalShape() {}

void TwoDimensionalShape::print2D() const {
    cout << "(" << Shape::getx() << "," << Shape::gety() << ")"<<endl;
}