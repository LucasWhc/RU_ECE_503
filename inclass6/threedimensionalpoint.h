// Haocong Wang 2019.10.25
// Header file for class ThreeDimensionalPoint

#ifndef INCLASS6_THREEDIMENSIONALPOINT_H
#define INCLASS6_THREEDIMENSIONALPOINT_H

#include "point.h"

class ThreeDimensionalPoint : public Point {
public:
    ThreeDimensionalPoint();

    ThreeDimensionalPoint(int, int, int);

    int getz();

    void setz(int);

    void addPoint(ThreeDimensionalPoint);

private:
    int z;
};


#endif //INCLASS6_THREEDIMENSIONALPOINT_H
