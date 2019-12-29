//Haocong Wang 2019/9/21
//Count the number of votes of each candidate

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;             //Use x to count the votes, it will be transferred to an integer finally
    int stu=20;           //20 students to vote from
    int cand=5;           //5 candidtes to vote to
    int v[cand]={0};      //Use array 'v' to contain the votes

    //Use a for loop to count the votes
    for(int i=1;i<=stu;i++)
    {
        cout<<"Please input one number from 1~5 to choose a candidate: ";
        cin>>x;
        cout<<endl;
        //Judge if the number is from 1~5
        if(x<1||x>5)
        {
            cout<<"You input the wrong number, please input again."<<endl;
            i--;
            continue;
        }
        if(abs(round(x)-x)>0.00000001)
        {
            cout<<"Please input an integer."<<endl;
            i--;
            continue;
        }
        int x_new=static_cast<int>(x);
        v[x_new-1]++;
    }

    int temp;
    int y=0;
    int z=0;
    temp=v[0];
    //Use a for loop to find the max
    for(int j=1;j<5;j++)
    {
        if(temp<v[j])
        {
            temp=v[j];
            z=j;
        }
    }

    //Use a for loop to judge if there are same highest vote counts
    for (int k=0;k<5;k++)
    {
        if(temp==v[k])
        {
            y++;
        }
    }

    //If there are same highest vote counts, there is no winner
    if(y>=2)
    {
        cout<<"There is no winner."<<endl;
    }
    //If there is only one highest vote count, print the winner
    if(y==1)
    {
        cout<<"The winner is candidate "<<z+1<<"."<<endl;
    }
    return 0;
}
