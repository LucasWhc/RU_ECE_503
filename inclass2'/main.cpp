//In-class Assignment 2
//Haocong Wang 2019/9/14
#include<iostream>
using namespace std;

int main() {
   int X,Y;         //Set X as the dividend and Y as the divisor
   int Q=0,R=0;     //Set Q as the quotient and R as the remainder
   cout<<"Please input the value of dividend and divisor: ";
   cin>>X>>Y;       //Input the value of X and Y
   if(X<Y){
       Q=0;
       R=X;
   }                //Quotient is 0 and remainder is X when X<Y
   else if(X>=Y){
       R=X-Y;
       Q++;
       while(R>=Y){ //Continue the loop when R>=Y
           R=R-Y;
           Q++;
       }            //End while
   }                //Calculate quotient and remainder with subtraction when X>=Y
   cout<<"\n"<<"The quotient is "<<Q<<" and the remainder is "<<R<<"."<<endl;
   return 0;
}