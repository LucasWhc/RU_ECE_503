// Haocong Wang 2019.11.09

#include <iostream>
#include <string>
#include "Linkedlist.h"

using namespace std;

void showMenu();

int main() {
    int choice, num;
    string name;
    Linkedlist list;
    showMenu();
    cin >> choice;
    while (choice != 8) {
        Node *node = new Node(name, num);
        switch (choice) {
            case 1: {
                cout << "Please enter product number and name:" << endl;
                cin >> num;
                cin >> name;
                node->setItemName(name);
                node->setItemNum(num);
                list.addToStart(node);
                list.printList();
                break;
            }
            case 2: {
                cout << "Please enter product number and name:" << endl;
                cin >> num;
                cin >> name;
                node->setItemName(name);
                node->setItemNum(num);
                list.addToEnd(node);
                list.printList();
                break;
            }
            case 3: {
                if (list.removeFromStart()) {
                    cout << "Removed!" << endl;
                    list.printList();
                } else {
                    cout << "Empty!" << endl;
                }
                break;
            }
            case 4: {
                if (list.removeFromEnd()) {
                    cout << "Removed!" << endl;
                    list.printList();
                } else {
                    cout << "Empty!" << endl;
                }
                break;
            }
            case 5: {
                cout << "Please enter product number:" << endl;
                cin >> num;
                list.removeNodeFromListnumber(num);
                list.printList();
                break;
            }
            case 6: {
                cout << "Please enter product name:" << endl;
                cin >> name;
                list.removeNodeFromListname(name);
                list.printList();
                break;
            }
            case 7: {
                list.printList();
                break;
            }
            default:
                cout << "Invalid choice!" << endl;
        }
        showMenu();
        cin >> choice;
    }
    cout << "Quit!" << endl;
    return 0;
}

void showMenu() {
    cout << "\nWelcome to the shopping list program" << endl;
    cout << "Please choose an option : " << endl;
    cout << "1. Add a new node at the beginning" << endl;
    cout << "2. Add a new node at the end" << endl;
    cout << "3. Remove the beginning node" << endl;
    cout << "4. Remove the end node" << endl;
    cout << "5. Remove a node from the list by entering an item number" << endl;
    cout << "6. Remove a node from the list by entering an item name" << endl;
    cout << "7. Print out the list" << endl;
    cout << "8. Quit the program" << endl;
    cout << "Please make your choice: " << endl;
}