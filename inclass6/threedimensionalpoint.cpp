// Haocong Wang 2019.10.25
// Cpp file for class ThreeDimensionalPoint

#include "threedimensionalpoint.h"

ThreeDimensionalPoint::ThreeDimensionalPoint() {
    setx(0);
    sety(0);
    setz(0);
}

ThreeDimensionalPoint::ThreeDimensionalPoint(int xin, int yin, int zin) {
    setx(xin);
    sety(yin);
    setz(zin);
}

int ThreeDimensionalPoint::getz() {
    return z;
}

void ThreeDimensionalPoint::setz(int zin) {
    z = zin;
}

void ThreeDimensionalPoint::addPoint(ThreeDimensionalPoint pointin) {
    this->setx((this->getx()) + pointin.getx());
    this->sety((this->gety()) + pointin.gety());
    this->setz((this->getz()) + pointin.getz());
}