// Haocong Wang 2019.10.26
// Main function for homework 8

#include <iostream>
#include "Circle.h"
#include "Triangle.h"
#include "Sphere.h"
#include "Tetrahedron.h"

using namespace std;

void Menu();

int main() {
    //Set four classes
    Circle circle;
    Triangle triangle;
    Sphere sphere;
    Tetrahedron tetrahedron;

    int x = 0, y = 0, z = 0, choice = 0;

    Menu();
    cin >> choice;

    while (choice != 0) {
        double r = 0.0, edge = 0.0;

        switch (choice) {
            case 1:
                cout << "You have chosen the circle." << endl;
                cout << "\nPlease enter the center of the circle (x-coordinate and then y-coordinate):" << endl;
                cin >> x >> y;
                circle.setx(x);
                circle.sety(y);
                cout << "\nPlease enter the radius of the circle:" << endl;
                cin >> r;
                circle.setr(r);
                circle.print();
                break;

            case 2:
                cout << "You have chosen the triangle." << endl;
                cout << "\nPlease enter the center of the triangle (x-coordinate and then y-coordinate):" << endl;
                cin >> x >> y;
                triangle.setx(x);
                triangle.sety(y);
                cout << "\nPlease enter the edge of the triangle:" << endl;
                cin >> edge;
                triangle.setedge(edge);
                triangle.print();
                break;

            case 3:
                cout << "You have chosen the sphere." << endl;
                cout << "\nPlease enter the center of the sphere (x-coordinate, y-coordinate and then z-coordinate):"<< endl;
                cin >> x >> y >> z;
                sphere.setx(x);
                sphere.sety(y);
                sphere.setz(z);
                cout << "\nPlease enter the radius of the sphere:" << endl;
                cin >> r;
                sphere.setr(r);
                sphere.print();
                break;

            case 4:
                cout << "You have chosen the Tetrahedron." << endl;
                cout<< "\nPlease enter the center of the tetrahedron (x-coordinate, y-coordinate and then z-coordinate):"<< endl;
                cin >> x >> y >> z;
                tetrahedron.setx(x);
                tetrahedron.sety(y);
                tetrahedron.setz(z);
                cout << "\nPlease enter the edge of the tetrahedron:" << endl;
                cin >> edge;
                tetrahedron.setedge(edge);
                tetrahedron.print();
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
        Menu();
        cin >> choice;
    }

    cout << "Exit!" << endl;
    return 0;
}

void Menu() {
    cout << "Menu:" << endl;
    cout << "Please choose a shape or 0 to exit:" << endl;
    cout << " Choice 1: Circle" << endl;
    cout << " Choice 2: Triangle" << endl;
    cout << " Choice 3: Sphere" << endl;
    cout << " Choice 4: Tetrahedron" << endl;
    cout << " Choice 0: Exit" << endl;
    cout << " Choice : ";
};