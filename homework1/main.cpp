//Haocong Wang  09/07/2019
#include <iostream>
#include <float.h>
int main()
{
    using namespace std;
    double x, Max, Min;      //n is a variable to contain those five numbers
    Max=DBL_MIN;             //set Max as the minimum of double
    Min=DBL_MAX;             //set Min as the Maximum of double
    cout<<"Please input five numbers(hit 'return' after each number):"<<endl;
    int i;                   //i is a variable for loop
    for(i=1;i<=5;i++)        //use 'for' loop to input five numbers
    {
        cin>>x;
        if(x>Max&&x<Min)    //give the value of first number to Max and Min
            Min=Max=x;
        if(x<Min)           //give the value of the input number to Min if it is less than Min
            Min=x;
        if(x>Max)           //give the value of the input number to Max if it is more than Max
            Max=x;
    }
    cout<<"The maximum number is:"<<Max<<'\n'<<"The minimum number is:"<<Min<<endl;    //output two required number
    return 0;
}