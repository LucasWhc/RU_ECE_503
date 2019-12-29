//Haocong Wang 2019.10.05
//Use recursion to print the square of n

#include <iostream>
#include <cmath>

using namespace std;

//Function prototype
void pow_Recur(int);

int main()
{
    //Use n and ans as the input and output of the recursion
    int n,ans;
    cout<<"Please input an positive integer: ";
    cin>>n;
    cout<<endl;
    //Judge if n is greater than 0
    while(n<=0){
        cout<<"Wrong number! Please input again: ";
        cin>>n;
        cout<<endl;
    }
    pow_Recur(n);
    return 0;
}

//Function for recursion
void pow_Recur(int n){
    //If n is 1, print 1
    if(n==1){
        cout<<1;
    }
        //If n is even, do the recursion first then print n^2
    else if(n%2==0){
        pow_Recur(n-1);
        cout<<","<<pow(n,2);
    }
        //If n is odd, print n^2 first then do the recursion
    else{
        cout<<pow(n,2)<<",";
        pow_Recur(n-1);
    }
}
