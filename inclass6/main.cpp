//Haocong Wang 2019.10.25
//Main function for in-class6

#include <iostream>
#include "point.h"
#include "threedimensionalpoint.h"

using namespace std;

int main() {
    ThreeDimensionalPoint point1(1,2,3);
    ThreeDimensionalPoint point2(4,5,6);
    point1.addPoint(point2);
    cout<<"The value of x is: "<<point1.getx()<<endl;
    cout<<"The value of y is: "<<point1.gety()<<endl;
    cout<<"The value of z is: "<<point1.getz()<<endl;
    return 0;
}