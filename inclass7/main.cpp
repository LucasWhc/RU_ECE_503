
// Haocong Wang 2019.11.16

#include <iostream>
#include <algorithm>
#include <deque>
#include <numeric>
#include <iterator>

using namespace std;

bool greater6(int);

void outputHalf(int);

int main() {
    deque<int> myDeque;

    //1.Insert the numbers 3,4,6,2,9,1,5,0,7,8
    myDeque.push_back(3);
    myDeque.push_back(4);
    myDeque.push_back(6);
    myDeque.push_back(2);
    myDeque.push_back(9);
    myDeque.push_back(1);
    myDeque.push_back(5);
    myDeque.push_back(0);
    myDeque.push_back(7);
    myDeque.push_back(8);

    //2.Remove the value of 7 from the deque
    myDeque.erase(remove(myDeque.begin(), myDeque.end(), 7), myDeque.end());

    //3.Replace values greater than 6 in the deque with 10
    replace_if(myDeque.begin(), myDeque.end(), greater6, 10);

    //4.Return and print out the sum of all the elements in the deque, then insert in the deque
    int sum = accumulate(myDeque.begin(), myDeque.end(), 0);
    cout << "The sum of the numbers 0 to 9 after removing 7 and replacing values greater than 6 with 10 is: " << sum
         << endl;
    myDeque.push_front(sum);

    //5.Count the number of elements in the deque that are greater than 6 and print out the count
    int num = count_if(myDeque.begin(), myDeque.end(), greater6);
    cout << "Now the number of elements greater than 6 is: " << num << endl;

    //6.Output the half (integer division) of every element
    cout << "The half of every element in the deque is: ";
    for_each(myDeque.begin(), myDeque.end(), outputHalf);
    cout << endl;

    //7.Sort the deque
    sort(myDeque.begin(), myDeque.end());

    //8.Find and print out the location of 6 in the deque.
    deque<int>::iterator pos;
    pos = find(myDeque.begin(), myDeque.end(), 6);
    if (pos != myDeque.end()) {
        int location = pos - myDeque.begin();
        cout << "After sorting, the location of 6 is at index: " << location << endl;
    } else cout << "'6' Not Found!" << endl;

    //9.Use the ostream_iterator and the copy algorithm to print out the deque elements
    ostream_iterator<int> output(cout, ",");
    cout << "The items in the deque are: ";
    copy(myDeque.begin(), myDeque.end(), output);
    cout << endl;

    system("pause");

    return 0;
}


//Function to determine if an element is greater than 6
bool greater6(int x) {
    return x > 6;
}

//Function to output the half of an element
void outputHalf(int x) {
    cout << x / 2 << " ";
}
