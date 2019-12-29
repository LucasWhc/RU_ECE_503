//Haocong Wang 2019.09.28
//Functions on a booklist

#include <iostream>

using namespace std;
int Max=20;

void Printmenu();
int Input();
void Print(int [],int);
int Add_end(int [],int,int);
int Add_pos(int [],int,int,int);
int Find_linear(const int [],int , int );
int Find_binary(const int [],int,int,int);
int Delete_pos(int [],int,int);
int Delete_isbn(int [],int, int);
void Sort_selection(int [],int);
void Sort_bubble(int [],int);

int main() {
    //Use several variables for program
    int choice;
    int isbn;
    int pos;
    int numbers = 0;
    int booklist[Max];
    bool sort=false;

    cout << "Welcome to the Book list program!\n";
    Printmenu();
    cin >> choice;

    //Use a while loop to execute user's choice
    while (choice != 0) {
        switch (choice) {
            //Add an element to the end of list
            case 1: {
                //Judge if the list is full
                if (numbers == 20) {
                    cout << "The booklist is full!" << endl;
                    break;
                }
                //Input a new ISBN to the end of list and show the list to user
                isbn = Input();
                //Check if the new ISBN is in the list
                if (Find_linear(booklist, numbers, isbn) != -1) {
                    cout << "This book is already in the list." << endl;
                    Delete_isbn(booklist, numbers, isbn);
                }
                numbers = Add_end(booklist, numbers, isbn);
                sort=false;
                Print(booklist, numbers);
                break;
            }

                //Add an element to a certain position
            case 2: {
                //Judge if the list is full
                if (numbers == 20) {
                    cout << "The booklist is full!" << endl;
                    break;
                }
                //Choose a position
                cout << "Please choose the position to add: (from 1 to " << numbers + 1 << ")" << endl;
                cin >> pos;
                //Judge if the position is in the array
                while (pos <= 0 || pos > numbers + 1) {
                    cout << "Error! Please input again: ";
                    cin >> pos;
                    cout << endl;
                }
                //Input a new ISBN to a certain position and show the list to user
                isbn = Input();
                //Check if the new ISBN is in the list
                if (Find_linear(booklist, numbers, isbn) != -1) {
                    cout << "This book is already in the list." << endl;
                    Delete_isbn(booklist, numbers, isbn);
                }
                numbers = Add_pos(booklist, numbers, pos, isbn);
                sort=false;
                Print(booklist, numbers);
                break;
            }

                //Find an element by ISBN number (linear search)
            case 3: {
                //Judge if the list is empty
                if (numbers == 0) {
                    cout << "The list is empty!" << endl;
                    break;
                }
                isbn = Input();
                pos = Find_linear(booklist, numbers, isbn);
                if (pos != -1) {
                    cout << "The book is at position " << pos << "." << endl;
                    break;
                } else {
                    cout << "Cannot find this book!" << endl;
                    break;
                }
            }

                //Find an element by ISBN number (binary search)
            case 4: {
                //Judge if the list is empty
                if (numbers == 0) {
                    cout << "The list is empty!" << endl;
                    break;
                }
                if(sort){
                    isbn = Input();
                    pos = Find_binary(booklist, isbn, 0, numbers - 1);
                    if (pos != -1) {
                        cout << "The book is at position " << pos << "." << endl;
                        break;
                    }
                    else {
                        cout << "Cannot find this book!" << endl;
                        break;
                    }
                }
                else{
                    cout<<"The list is not sorted!"<<endl;
                    break;
                }
            }

                //Delete an element at a certain position
            case 5: {
                //Judge if the list is empty
                if (numbers == 0) {
                    cout << "The list is empty!" << endl;
                    break;
                }
                //Choose a position
                cout << "Please choose the position to delete: (from 1 to " << numbers << ")" << endl;
                cin >> pos;
                //Judge if the position is in the array
                while (pos <= 0 || pos > numbers) {
                    cout << "Error! Please input again: ";
                    cin >> pos;
                    cout << endl;
                }
                numbers = Delete_pos(booklist,numbers,pos);
                Print(booklist, numbers);
                break;
            }

                //Delete an element by ISBN number
            case 6:{
                //Judge if the list is empty
                if (numbers == 0) {
                    cout << "The list is empty!" << endl;
                    break;
                }
                isbn=Input();
                pos=Find_linear(booklist,numbers,isbn);
                if(pos!=-1){
                    numbers=Delete_isbn(booklist,numbers,isbn);
                    Print(booklist,numbers);
                    break;
                }
                else{
                    cout<<"Cannot find this book!"<<endl;
                    break;
                }
            }

                //Sort the list (selection sort)
            case 7:{
                //Judge if the list is empty
                if (numbers == 0) {
                    cout << "The list is empty!" << endl;
                    break;
                }
                Sort_selection(booklist,numbers);
                sort=true;
                Print(booklist,numbers);
                break;
            }

                //Sort the list (bubble sort)
            case 8:{
                //Judge if the list is empty
                if (numbers == 0) {
                    cout << "The list is empty!" << endl;
                    break;
                }
                Sort_bubble(booklist,numbers);
                sort=true;
                Print(booklist,numbers);
                break;
            }

                //Print the list
            case 9: {
                Print(booklist, numbers);
                break;
            }

            default: {
                cout << "Error!" << endl;
            }
        }
        Printmenu();
        cin >> choice;
    }

    cout << "Over!" << endl;
    return 0;
}

//Function to show menu to user
void Printmenu(){
    cout<<"What would you like to do?\n";
    cout<<"1. Add an element to the end of list."<<endl;
    cout<<"2. Add an elemrnt to a certain position."<<endl;
    cout<<"3. Find an element by ISBN number (linear search)."<<endl;
    cout<<"4. Find an element by ISBN number (binary search)."<<endl;
    cout<<"5. Delete an element at a certain position."<<endl;
    cout<<"6. Delete an element by ISBN number."<<endl;
    cout<<"7. Sort the list (selection sort)."<<endl;
    cout<<"8. Sort the list (bubble sort)."<<endl;
    cout<<"9. Print the list."<<endl;
    cout<<"0. Quit."<<endl;
    cout<<"Please make your choice (your first choice must be 1):"<<endl;
}

//Function to input ISBN number
int Input(){
    int isbn;
    cout<<"Please input your ISBN number (9 digits and the first one cannot be 0): ";
    cin>>isbn;
    cout<<endl;
    return isbn;
}

//Function to print the booklist
void Print(int booklist[],int num){
    cout<<"Your list is:"<<endl;
    for(int i=0;i<num;i++){
        cout<<i+1<<". "<<booklist[i]<<endl;
    }
}

//Function to add an element to the end of list
int Add_end(int booklist[],int num,int isbn_new){
    num++;
    booklist[num-1]=isbn_new;
    return num;
}

//Function to add an element to a certain position
int Add_pos(int booklist[],int num,int pos,int isbn_new){
    num++;
    for(int i=num-1;i>=pos;i--){
        booklist[i]=booklist[i-1];
    }
    booklist[pos-1]=isbn_new;
    return num;
}

//Function to find an element by ISBN number (linear search)
int Find_linear(const int booklist[],int num,int isbn){
    for(int i=0;i<num;i++){
        if(booklist[i]==isbn){
            return i+1;
        }
    }
    return -1;
}

//Function to find an element by ISBN number (binary search)
int Find_binary(const int booklist[],int isbn,int low,int high){
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

//Function to delete an element at a certain position
int Delete_pos(int booklist[],int num,int pos){
    num--;
    for(int i=pos-1;i<num;i++){
        booklist[i]=booklist[i+1];
    }
    return num;
}

//Function to delete an element by ISBN number
int Delete_isbn(int booklist[],int num, int isbn){
    for(int i=0;i<num;i++){
        if(booklist[i]==isbn){
            num--;
            for(int j=i;j<num;j--){
                booklist[j]=booklist[j+1];
            }
            return num;
        }
    }
    return num;
}

//Function to sort the list (selection sort)
void Sort_selection(int booklist[],int num){
    int smallest;
    for(int i=0;i<num-1;i++){
        smallest=*(booklist+i);
        for(int j=i+1;j<num;j++){
            if(*(booklist+j)<smallest){
                smallest=*(booklist+j);
                *(booklist+j)=*(booklist+i);
                *(booklist+i)=smallest;
            }
        }
    }
}

//Function to sort the list (bubble sort)
void Sort_bubble(int booklist[],int num){
    int temp;
    for(int i=0;i<num-1;i++){
        for(int j=0;j<num-1-i;j++){
            if(*(booklist+j)>*(booklist+j+1)){
                temp=*(booklist+j);
                *(booklist+j)=*(booklist+j+1);
                *(booklist+j+1)=temp;
            }
        }
    }
}