//Haocong Wang 2019.09.14
#include <iostream>
//Using for structure to print a triangular shape
using namespace std;

int main(){
    int i,j,k;
    cout<<"Please input the number of lines: "<<endl;
    //Ask users to tap in the number of lines
    cin>>k;
    //Store the number in k
    for(i=1;i<=k;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cin.get();
    //Let the user see the figure
    return 0;
}