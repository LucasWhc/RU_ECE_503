//Haocong Wang 2019.10.04
//Recursive method of countBinStr

#include <iostream>
using namespace std;

//Function prototype
int countBinStr(int);

//Use result to contain the result of each recursion
int result;

int main() {
    //Use n as the integer parameter and ans as the result
    int n;
    int ans;
    cout<<"Please input an integer (should be greater or equal to 0): ";
    cin>>n;
    cout<<endl;
    //Judge if n>=0 or not
    while(n<0){
        cout<<"Wrong number! Please input again: ";
        cin>>n;
        cout<<endl;
    }
    //Calculate the result
    ans=countBinStr(n);
    cout<<"The result is "<<ans<<"."<<endl;
    return 0;
}

int countBinStr(int n){
    int result;
    //For n=0, "return 1" is for the calculation to be finished
    if(n==0){
        return 1;
    }
    //For n=1, there are 2 binary numbers--0 and 1
    else if(n==1){
        return 2;
    }
    //Do the recursion
    return result=countBinStr(n-1)+countBinStr(n-2);
}