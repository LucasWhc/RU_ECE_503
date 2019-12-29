//Haocong Wang 2019.10.05
//Use recursion to finish a puzzle jump

#include <iostream>
#include <vector>

using namespace std;

//Function prototype
int Input(vector<int> &);
void Output(const vector<int> &,int);
bool puzzleSolve(vector<int> &,int,int);
bool puzzleRight(vector<int> &,int,int);
bool puzzleLeft(vector<int> &,int,int);

int main(){
    //Set a puzzle
    vector<int> puzzle;
    int n=Input(puzzle);
    if(puzzleSolve(puzzle,n,0)){
        cout<<"Solved!"<<endl;
    }
    else{
        cout<<"False!"<<endl;
    }
    return 0;
}

//Function to input elements into the vector
int Input(vector<int> &puzzle){

    //use num to contain each element temporarily
    int num;
    int count=0;

    //Ask user to input elements to puzzle
    cout<<"Please input positive integers to your puzzle (if it is 0, program is finished): "<<endl;
    cin>>num;

    //Check if the number is greater than 0
    while(num<0){
        cout<<"Wrong number! Please input again: "<<endl;
        cin>>num;
    }

    //Insert numbers into the puzzle
    while(num!=0){
        puzzle.push_back(num);
        count++;
        cin>>num;
        //Make sure all numbers are greater than 0
        while(num<0){
            cout<<"Wrong number! Please input again: "<<endl;
            cin>>num;
        }
    }
    //Input 0 as the last element of the puzzle
    puzzle.push_back(0);
    count++;

    //Select the first number to start jumping
    int fir;
    cout<<"Please select the first number to start jumping (from 1 to "<<count<<" ):"<<endl;
    cin>>fir;

    //Check if the first number is in the range
    while(fir<=0||fir>count){
        cout<<"Wrong number! Please input again: "<<endl;
        cin>>fir;
    }

    //Put fir in the puzzle
    puzzle.insert(puzzle.begin(),fir);
    count++;
    Output(puzzle,count);
    return count;
}

//Function to output the puzzle
void Output(const vector<int> &puzzle,int n){
    cout<<"Your puzzle is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<puzzle[i]<<" ";
    }
    cout<<endl;
}

//Function to check whether the puzzle can be solved
bool puzzleSolve(vector<int> &puzzle,int n,int m){
    //Set a vector to contain puzzle during resursion
    vector<int> temp;

    //Set the position for ending recursion: the peg move to last element
    if(m==n-1){
        return true;
    }

    else{
        //Check if the peg can move right
        if(puzzleRight(puzzle,n,m)){
            int o=m+puzzle[m];
            temp=puzzle;
            puzzle[m]=-1;
            if(puzzleSolve(puzzle,n,o)){
                return true;
            }
        }
        puzzle=temp;

        //Check if the peg can move left
        if(puzzleLeft(puzzle,n,m)){
            int o=m-puzzle[m];
            temp=puzzle;
            puzzle[m]=-1;
            if(puzzleSolve(puzzle,n,o)){
                return true;
            }
        }
        puzzle=temp;

        //If the peg can move neither right nor left, return false
        return false;
    }
}

//Function to check if the peg can move right
bool puzzleRight(vector<int> &puzzle,int n,int m){
    m+=puzzle[m];
    if(puzzle[m]==-1){
        return false;
    }
    if(m<=0||m>=n){
        return false;
    }
    return true;
}

//Function to check if the peg can move left
bool puzzleLeft(vector<int> &puzzle,int n,int m){
    m-=puzzle[m];
    if(puzzle[m]==-1){
        return false;
    }
    if(m<=0||m>=n){
        return false;
    }
    return true;
}