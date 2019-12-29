//
// Created by Lucas on 2019/10/26.
//

#include "Shape.h"
#include <iostream>

using namespace std;

Shape::Shape() {
    setx(0);
    sety(0);
    setz(0);
}

int Shape::getx() const {
    return x;
}

void Shape::setx(int xin) {
    x = xin;
}

int Shape::gety() const {
    return y;
}

void Shape::sety(int yin) {
    y = yin;
}

int Shape::getz() const {
    return z;
}

void Shape::setz(int zin) {
    z = zin;
}