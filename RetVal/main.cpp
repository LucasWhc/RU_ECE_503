#include <iostream>
using namespace std;
int r1,c1;

struct RetVal{
    int a;
    int b;
};

RetVal input_r_c(int r,int c){
    cout<<"Please input the number of rows: "<<endl;
    cin>>r;
    while(r>10||r<1){
        cout<<"Please input an integer from 1 to 10"<<endl;
        cin>>r;
    }
    cout<<"Please input the number of columns: "<<endl;
    cin>>c;
    while(c>10||c<1){
        cout<<"Please input an integer from 1 to 10"<<endl;
        cin>>c;
    }
    return{.a=r,.b=c};
}

int main() {
    auto inputrandc=input_r_c(r1,c1);
//    r1=inputrandc.a;
//    c1=inputrandc.b;
    cout<<inputrandc.a<<inputrandc.b<<endl;
    cout<<r1<<c1<<endl;
    return 0;
}