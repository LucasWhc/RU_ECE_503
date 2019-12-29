//Haocong Wang 2019.09.14
#include <iostream>
//Using for structure to print a diamond shape
using namespace std;

int main(){

    int num;
    cout<<"What is the maximum number of spaces you want?"<<endl;//Ask the user to tap in the number of spaces
    cin>>num;//Store this number in num

    //Make sure the user input an odd number
    if(num%2==0){
        cout<<"Please input an odd number."<<endl;
        cin>>num;
    }

    int m=(num+3)/2;

    //print the higher part of the diamond
    //print spaces before first * and the first *
    for(int i=1;i<=m;i++){
        for(int j=1;j<=(m-i);j++){
            cout<<" ";
        }
        cout<<"*";
        //The first line only has one *, so we skip the first line
        if(i==1){
            cout<<endl;
            continue;
        }
        //print spaces between two * and the second *
        for(int k=1;k<=(2*i-3);k++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }

    //print the lower part of the diamond
    //print spaces before first * and the first *
    for(int i=1;i<=(m-1);i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        cout<<"*";
        //The last line only has one *, so we skip the last line
        if(i==m-1){
            cout<<endl;
            break;
        }
        for(int k=1;k<=(num-2*i);k++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }

    return 0;
}