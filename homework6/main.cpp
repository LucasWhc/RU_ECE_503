//Haocong Wang 2019.10.12
//Main function for booklist

#include <iostream>
#include "Booklist.h"

using namespace std;

void Printmenu();

int main() {
    Booklist book_list;
    int choice;

    cout << "Welcome to the Book list program!\n";
    Printmenu();
    cin >> choice;

    //Use a while loop to execute user's choice
    while (choice != 0) {
        switch (choice) {
            //Add an element to the end of list
            case 1: {
                //Judge if the list is full
                if(book_list.List_full()){
                break;
                }
                //Input a new ISBN to the end of list and show the list to user
                book_list.Input();
                //Check if the new ISBN is in the list
                if (book_list.Find_linear() != -1) {
                    cout << "This book is already in the list." << endl;
                    book_list.Delete_isbn();
                }
                book_list.Add_end();
                book_list.sorted=false;
                book_list.Print();
                break;
            }

                //Add an element to a certain position
            case 2: {
                //Judge if the list is full
                if(book_list.List_full()){
                    break;
                }
                //Choose and judge if the position is in the array
                book_list.Judge_pos_add();
                //Input a new ISBN to the end of list and show the list to user
                book_list.Input();
                //Check if the new ISBN is in the list
                if (book_list.Find_linear() != -1) {
                    cout << "This book is already in the list." << endl;
                    book_list.Delete_isbn();
                }
                book_list.Add_pos();
                book_list.sorted=false;
                book_list.Print();
                break;
            }

                //Find an element by ISBN number (linear search)
            case 3: {
                //Judge if the list is empty
                if(book_list.List_empty()){
                    break;
                }
                book_list.Input();
                //Judge if the book can be found
                if(book_list.Find_linear()!=-1){
                    cout<<"The book is at position " <<book_list.Find_linear()<<"."<<endl;
                    break;
                }
                else {
                    cout << "Cannot find this book!" << endl;
                    break;
                }
            }

                //Find an element by ISBN number (binary search)
            case 4: {
                //Judge if the list is empty
                if(book_list.List_empty()){
                    break;
                }
                book_list.Input();
                //Judge if the list is sorted or not
                if(book_list.sorted){
                    //Judge if the book can be found
                    if(book_list.Find_binary()!=-1){
                        cout<< "The book is at position " <<book_list.Find_binary()<<"."<<endl;
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
                if (book_list.List_empty()) {
                    break;
                }
                //Choose and judge if the position is in the array
                book_list.Judge_pos_delete();
                book_list.Delete_pos();
                book_list.Print();
                break;
            }

                //Delete an element by ISBN number
            case 6: {
                //Judge if the list is empty
                if (book_list.List_empty()) {
                    break;
                }
                book_list.Input();
                //Judge if the book can be found
                if(book_list.Find_linear()!=-1){
                    book_list.Delete_isbn();
                    book_list.Print();
                    break;
                }
                else{
                    cout<<"Cannot find this book!"<<endl;
                    break;
                }
            }

                //Sort the list (selection sort)
            case 7: {
                //Judge if the list is empty
                if (book_list.List_empty()) {
                    break;
                }
                book_list.Sort_selection();
                book_list.sorted=true;
                book_list.Print();
                break;
            }

                //Sort the list (bubble sort)
            case 8: {
                //Judge if the list is empty
                if (book_list.List_empty()) {
                    break;
                }
                book_list.Sort_bubble();
                book_list.sorted=true;
                book_list.Print();
                break;
            }

                //Print the list
            case 9: {
                book_list.Print();
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

void Printmenu(){
    cout<<"What would you like to do?\n";
    cout<<"1. Add an element to the end of list."<<endl;
    cout<<"2. Add an elemrnt to a certain position."<<endl;
    cout<<"3. Find an element by book name (linear search)."<<endl;
    cout<<"4. Find an element by book name (binary search)."<<endl;
    cout<<"5. Delete an element at a certain position."<<endl;
    cout<<"6. Delete an element by book name."<<endl;
    cout<<"7. Sort the list (selection sort)."<<endl;
    cout<<"8. Sort the list (bubble sort)."<<endl;
    cout<<"9. Print the list."<<endl;
    cout<<"0. Quit."<<endl;
    cout<<"Please make your choice (your first choice must be 1):"<<endl;
}