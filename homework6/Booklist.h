//Haocong Wang 2019.10.12
//Header file for booklist.

#ifndef HOMEWORK6_BOOKLIST_H
#define HOMEWORK6_BOOKLIST_H

class Booklist {

public:
    Booklist();
    bool sorted;
    int Input();
    void Print();
    bool List_full();
    bool List_empty();
    int Judge_pos_add();
    int Judge_pos_delete();
    int Add_end();
    int Add_pos();
    int Find_linear();
    int Find_binary();
    int Delete_pos();
    int Delete_isbn();
    void Sort_selection();
    void Sort_bubble();

private:
    int pos;
    int numbers;
    int booklist[20];
    int isbn;

};

#endif //HOMEWORK6_BOOKLIST_H
