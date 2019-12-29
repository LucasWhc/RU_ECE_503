#include <iostream>
using namespace std;

int rotatedDigits(int N) {
    int count=0,res=0;
    for(int i=1;i<=N;i++){
        bool flag=true;
        int temp=0;
        int num=i;
        while(num!=0){
            res=num%10;
            if(res==3||res==4||res==7){
                flag=false;
                break;
            }
            if(res==2||res==5||res==6||res==9) temp++;
            num/=10;
        }
        if(flag&&temp>0) count++;
    }
    return count;
}

int main() {
    std::cout <<rotatedDigits(10)  << std::endl;
    return 0;
}

