//Haocong Wang 2019.10.12
//Cpp file for booklist

#include "Booklist.h"
#include <iostream>
#include <cstring>

using namespace std;

Booklist::Booklist() {
    memset(booklist,0, sizeof(booklist));
    numbers=pos=isbn=0;
    sorted=false;
}

int Booklist::Input() {
    cout<<"Please input your ISBN number (9 digits and the first one cannot be 0): ";
    cin>>isbn;
    cout<<endl;
    return isbn;
}

void Booklist::Print(){
    cout<<"Your list is:"<<endl;
    for(int i=0;i<numbers;i++){
        cout<<i+1<<". "<<booklist[i]<<endl;
    }
}

bool Booklist::List_full() {
    if (numbers == 20) {
        cout << "The booklist is full!" << endl;
        return true;
    }
    return false;
}

bool Booklist::List_empty() {
    if (numbers == 0) {
        cout << "The list is empty!" << endl;
        return true;
    }
    return false;
}

int Booklist::Judge_pos_add() {
    cout << "Please choose the position: (from 1 to " << numbers + 1 << ")" << endl;
    cin >> pos;
    //Judge if the position is in the array
    while (pos <= 0 || pos > numbers + 1) {
        cout << "Error! Please input again: ";
        cin >> pos;
        cout << endl;
    }
    return pos;
}

int Booklist::Judge_pos_delete() {
    cout<< "Please choose the position: (from 1 to " << numbers << ")" << endl;
    cin >> pos;
    //Judge if the position is in the array
    while (pos <= 0 || pos > numbers) {
        cout << "Error! Please input again: ";
        cin >> pos;
        cout << endl;
    }
    return pos;
}

int Booklist::Add_end() {
    numbers++;
    booklist[numbers-1]=isbn;
    return numbers;
}

int Booklist::Add_pos() {
    numbers++;
    for(int i=numbers-1;i>=pos;i--){
        booklist[i]=booklist[i-1];
    }
    booklist[pos-1]=isbn;
    return numbers;
}

int Booklist::Find_linear() {
    for(int i=0;i<numbers;i++){
        if(booklist[i]==isbn){
            return i+1;
        }
    }
    return -1;
}

int Booklist::Find_binary() {
    int low=0;
    int high=numbers-1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(booklist[mid]==isbn){
            return mid+1;
        }
        else if(isbn<booklist[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

int Booklist::Delete_pos() {
    numbers--;
    for(int i=pos-1;i<numbers;i++){
        booklist[i]=booklist[i+1];
    }
    return numbers;
}

int Booklist::Delete_isbn() {
    for(int i=0;i<numbers;i++){
        if(booklist[i]==isbn){
            numbers--;
            for(int j=i;j<numbers;j++){
                booklist[j]=booklist[j+1];
            }
            return numbers;
        }
    }
    return numbers;
}

void Booklist::Sort_selection() {
    int smallest;
    for(int i=0;i<numbers-1;i++){
        smallest=*(booklist+i);
        for(int j=i+1;j<numbers;j++){
            if(*(booklist+j)<smallest){
                smallest=*(booklist+j);
                *(booklist+j)=*(booklist+i);
                *(booklist+i)=smallest;
            }
        }
    }
}

void Booklist::Sort_bubble() {
    int temp;
    for(int i=0;i<numbers-1;i++){
        for(int j=0;j<numbers-1-i;j++){
            if(*(booklist+j)>*(booklist+j+1)){
                temp=*(booklist+j);
                *(booklist+j)=*(booklist+j+1);
                *(booklist+j+1)=temp;
            }
        }
    }
}