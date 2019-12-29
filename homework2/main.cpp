//Haocong Wang 2019/09/14
//Monte carlo simulation to estimate the value of Pi

#include <iostream>
#include <cstdlib>          //Contains functions of rand and srand
#include <ctime>           //Contains function of time
#include <fstream>          //Contains operation for file
#define Pi_real 3.14159     //Define the value of Pi

using namespace std;

int main() {
    int num;
    int point=0;            //Use point as the number of dots that are inside the arc
    double pi;

    //Ask the user to tap in the number of dots
    cout<<"How many dots do you want in the square?"<<endl;
    cout<<"Attention: If the result of calculation approaches the value of Pi, the program will be shut down."<<endl;
    cin>>num;

    srand(unsigned(time(0)));
    ofstream file;
    file.open("Coordinate.txt");         //Open a file "Coordinate"
    file<<"X"<<"           "<<"Y"<<"\n";

    //Use a for loop to input the coordinates
    for(double i=0;i<=num;i++) {            //i remains an integer, but we double it in order to calculate
        //Use x and y as the name of coordinates
        double x=static_cast<double>(rand())/RAND_MAX;
        double y=static_cast<double>(rand())/RAND_MAX;
        file<<x<<"  "<<y<<"\n";
        //Judge whether the dot is inside the arc or not
        if(x*x+y*y<=1.0) {
            ++point;
        }
        //Calculate the value of variable pi
        pi=4*point/i;
        //If the result approached the value of Pi_real, stop the loop;
        if(pi<=Pi_real+0.0001&&pi>=Pi_real-0.0001) {
            break;
        }
    }

    //output the value of Pi
    cout<<"PI="<<pi<<endl;             //print the value of Pi
    return 0;
}