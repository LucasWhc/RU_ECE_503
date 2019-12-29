#include <iostream>
#include <iomanip>
using namespace std;
void InputMatrix(double **M,int Row,int Col)
{
    cout<<"Please enter the Matrix:"<<endl;
    for (int i = 0;i<Row;i++)
    {
        for (int j = 0; j < Col; j++) {
            cin >> M[i][j];
        }
        cout << endl;
    }
}
void PrintMatrix(double **M,int Row,int Col)
{
    cout<<"The Matrix is:"<<endl;
    for (int i = 0;i<Row;i++)
    {
        for(int j=0;j<Col;j++)
        {
            cout<<setw(10)<<M[i][j];
        }
        cout<<endl;
    }
}
int main() {
    double **R;
    int x=3,y=3;
    R= new double *[x];
    for (int i = 0; i < x; ++i)
    {
        R[i] = new double[y];
    }
    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < y; ++j)
        {
            R[i][j] = 0;
        }
    }
    InputMatrix(R,x,y);
    PrintMatrix(R,x,y);
    return 0;
}