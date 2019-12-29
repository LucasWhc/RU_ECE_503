// Haocong Wang 2019.10.25
// Header file for class Point

#ifndef INCLASS6_POINT_H
#define INCLASS6_POINT_H


class Point {
public:
    Point();

    Point(int, int);

    int getx();

    int gety();

    void setx(int);

    void sety(int);

private:
    int x, y;
};


#endif //INCLASS6_POINT_H
