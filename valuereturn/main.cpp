#include <iostream>
using namespace std;
int R,C;
void InputRandC()
{
    cout << "Please inter the number of the Row and Max is 10" << endl;
    cin >> R;
    while(R<=0||R>10)
    {
        cout << "Please inter the number of the Row and Max is 10" << endl;
        cin >> R;
    }

    cout << "Please inter the number of the Col and Max is 10" << endl;
    cin >> C;
    while(C<=0||C>10)
    {
        cout << "Please inter the number of the Col and Max is 10" << endl;
        cin >> C;
    }
}
int main() {
    InputRandC();
    cout<<R<<C<<endl;
    return 0;
}