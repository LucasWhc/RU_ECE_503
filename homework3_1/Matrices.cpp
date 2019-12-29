//Haocong Wang 2019/09/25
//Use dynamic 2D-array to perform matrix operations
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int r1,c1;                   //r1 and c1 represent the number of rows and column of matrix 1 respectively
int r2,c2;                   //r2 and c2 represent the number of rows and column of matrix 2 respectively
double det=0;                //det is the result of determinant

//Function to show menu to users
void printmenu(){
    cout<<"Menu"<<endl;
    cout<<"Choice 1: Addition"<<endl;
    cout<<"Choice 2: Subtraction"<<endl;
    cout<<"Choice 3: Multiplication"<<endl;
    cout<<"Choice 4: Transpose"<<endl;
    cout<<"Choice 5: Determinant"<<endl;
    cout<<"Choice 6: Inverse"<<endl;
    cout<<"Choice 7: Quit"<<endl;
    cout<<"Please make your choice: "<<endl;
}

//Use a struct to return 2 values
struct RetVal{
    int a;
    int b;
};
//Function to input numbers of rows and columns of matrix
RetVal input_r_c(int r,int c){
    cout<<"Please input the number of rows: ";
    cin>>r;
    while(r>10||r<1){
        cout<<"Please input an integer from 1 to 10"<<endl;
        cin>>r;
    }
    cout<<endl;
    cout<<"Please input the number of columns: ";
    cin>>c;
    while(c>10||c<1) {
        cout << "Please input an integer from 1 to 10" << endl;
        cin >> c;
    }
    cout<<endl;
    return{.a=r,.b=c};
}

//Function to input elements of matrix
void inputMatrix(double **M,int r,int c){
    cout<<"Please enter elements for the matrix:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>M[i][j];
        }
    }
}

//Function to output matrix
void printMatrix(double **M,int r,int c){
    cout<<"The matrix is: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<setw(5)<<M[i][j];
        }
        cout<<endl;
    }
}

//Function to release memory of matrix
void Release(double **M,int r){
    for(int i=0;i<r;i++){
        delete[] M[i];
    }
    delete[] M;
}

//Function to add 2 matrices
void Addition(double **M,double **N,double **O,int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            O[i][j]=M[i][j]+N[i][j];
        }
    }
}

//Function to subtract 2 matrices
void Subtraction(double **M,double **N,double **O,int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            O[i][j]=M[i][j]-N[i][j];
        }
    }
}

//Function to multiply 2 matrices
void Multiplication(double **M,double **N,double **O,int rm,int cm, int cn){
    for(int i=0;i<rm;i++){
        for(int j=0;j<cn;j++){
            for(int k=0;k<cm;k++){
                O[i][j]+=M[i][k]*N[k][j];
            }
        }
    }
}

//Function to transpose a matrix
void Transpose(double **M,double **O,int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            O[j][i]=M[i][j];
        }
    }
}

//Function to calculate determinant of a matrix
double Determinant(double **M,int r){
    double **P;               //Use P to store algebraic remainder
    double sum=0;             //Use sum to store the result
    //Initialize P
    P=new double *[r];
    for(int i=0;i<r;i++){
        P[i]=new double [r];
    }
    //Calculate determinant
    if(r==1){
        return M[0][0];
    }
    else if(r==2){
        return(M[0][0]*M[1][1]-M[0][1]*M[1][0] );
    }
    else if(r==3){
        return M[0][0]*M[1][1]*M[2][2]+M[0][1]*M[1][2]*M[2][0]+M[0][2]*M[1][0]*M[2][1]-M[0][2]*M[1][1]*M[2][0]-M[1][2]*M[2][1]*M[0][0]-M[2][2]*M[1][0]*M[0][1];
    }
    else {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < r - 1; j++) {
                for (int k = 0; k < r - 1; k++) {
                    P[j][k] = M[j + 1][(k >= i) ? k + 1 : k];
                }
            }
            //Use the function again
            double sum_1 = Determinant(P, r - 1);
            if (i % 2 == 0) {
                sum += M[0][i] * sum_1;
            } else {
                sum -= M[0][i] * sum_1;
            }
        }
        Release(P, r);
        return sum;
    }
}

//Function to adjoint for calculating inverse
void Adjoint(double **M,double **N,int r){
    double **P;               //Use P to store algebraic remainder
    //Initialize P
    P=new double *[r];
    for(int i=0;i<r;i++){
        P[i]=new double [r];
    }
    //Calculate adjoint
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            for(int k=0;k<r-1;k++){
                for(int l=0;l<r-1;l++){
                    P[k][l]=M[k>=i?k+1:k][l>=j?l+1:l];
                }
            }
            //Use the function determinant
            N[j][i]=Determinant(P,r-1);
            if((i+j)%2==1)
            {
                N[j][i]=-N[j][i];
            }
        }
    }
    Release(P,r);
}

//Function to inverse
void Inverse(double **M,double **N,int r){
    //Use div and function Determinant to calculate
    double div=Determinant(M,r);
    double **P;
    //Initialize P
    P=new double *[r];
    for(int i=0;i<r;i++){
        P[i]=new double [r];
    }
    //Calculate adjoint
    Adjoint(M,P,r);
    //Use for loop to inverse
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            N[i][j]=P[i][j]/div;
        }
    }
    Release(P,r);
}

int main(){
    //Define 3 matrices
    double **M;
    double **N;
    double **O;
    printmenu();
    int x;                     //x is users' choice
    cin>>x;
    while(x!=7){
        switch(x) {
            //Do addition
            case 1: {
                //Input row and column of matrix M
                auto input1 = input_r_c(r1, c1);
                r1 = input1.a;
                c1 = input1.b;
                //Initialize matrix M
                M = new double *[r1];
                for (int i = 0; i < r1; i++) {
                    M[i] = new double[c1];
                }
                //Input elements to M and show it to user
                inputMatrix(M, r1, c1);
                printMatrix(M, r1, c1);

                //Input row and column of matrix N
                auto input2 = input_r_c(r2, c2);
                r2 = input2.a;
                c2 = input2.b;
                //Judge if M and N are same sized
                if (r1 != r2 || c1 != c2) {
                    cout << "Error!" << endl;
                    break;
                }
                //Initialize matrix N
                N = new double *[r2];
                for (int i = 0; i < r1; i++) {
                    N[i] = new double[c2];
                }
                //Input elements to N and show it to user
                inputMatrix(N, r2, c2);
                printMatrix(N, r2, c2);

                //Initialize matrix O
                O = new double *[r1];
                for (int i = 0; i < r1; i++) {
                    O[i] = new double[c1];
                }
                //Add M and N into R and show R to user
                Addition(M, N, O, r1, c1);
                cout << "The result is: " << endl;
                printMatrix(O, r1, c1);
                Release(M, r1);
                Release(N, r2);
                Release(O, r1);
                break;
            }

                //Do subtraction
            case 2: {
                //Input row and column of matrix M
                auto input1 = input_r_c(r1, c1);
                r1 = input1.a;
                c1 = input1.b;
                //Initialize matrix M
                M = new double *[r1];
                for (int i = 0; i < r1; i++) {
                    M[i] = new double[c1];
                }
                //Input elements to M and show it to user
                inputMatrix(M, r1, c1);
                printMatrix(M, r1, c1);

                //Input row and column of matrix N
                auto input2 = input_r_c(r2, c2);
                r2 = input2.a;
                c2 = input2.b;
                //Judge if M and N are same sized
                if (r1 != r2 || c1 != c2) {
                    cout << "Error!" << endl;
                    break;
                }
                //Initialize matrix N
                N = new double *[r2];
                for (int i = 0; i < r1; i++) {
                    N[i] = new double[c2];
                }
                //Input elements to N and show it to user
                inputMatrix(N, r2, c2);
                printMatrix(N, r2, c2);

                //Initialize matrix O
                O = new double *[r1];
                for (int i = 0; i < r1; i++) {
                    O[i] = new double[c1];
                }
                //Subtract M by N into O and show it to user
                Subtraction(M, N, O, r1, c1);
                cout << "The result is: " << endl;
                printMatrix(O, r1, c1);
                Release(M, r1);
                Release(N, r2);
                Release(O, r1);
                break;
            }

                //Do multiplication
            case 3: {
                //Input row and column of matrix M
                auto input1 = input_r_c(r1, c1);
                r1 = input1.a;
                c1 = input1.b;
                //Initialize matrix M
                M = new double *[r1];
                for (int i = 0; i < r1; i++) {
                    M[i] = new double[c1];
                }
                //Input elements to M and show it to user
                inputMatrix(M, r1, c1);
                printMatrix(M, r1, c1);

                //Input row and column of matrix N
                auto input2 = input_r_c(r2, c2);
                r2 = input2.a;
                c2 = input2.b;
                //Judge if c1 equals r2
                if (c1 != r2) {
                    cout << "Error!" << endl;
                    break;
                }
                //Initialize matrix N
                N = new double *[r2];
                for (int i = 0; i < r1; i++) {
                    N[i] = new double[c2];
                }
                //Input elements to N and show it to user
                inputMatrix(N, r2, c2);
                printMatrix(N, r2, c2);

                //Initialize matrix O
                O = new double *[r1];
                for (int i = 0; i < r1; i++) {
                    O[i] = new double[c1];
                }
                //Multiply M by N into O and show it to user
                Multiplication(M, N, O, r1, c1, c2);
                cout << "The result is: " << endl;
                printMatrix(O, r1, c2);
                Release(M, r1);
                Release(N, r2);
                Release(O, r1);
                break;
            }

                //Do transpose
            case 4: {
                //Input row and column of matrix M
                auto input1 = input_r_c(r1, c1);
                r1 = input1.a;
                c1 = input1.b;
                //Initialize matrix M
                M = new double *[r1];
                for (int i = 0; i < r1; i++) {
                    M[i] = new double[c1];
                }
                //Input elements to M and show it to user
                inputMatrix(M, r1, c1);
                printMatrix(M, r1, c1);

                //Input row and column of matrix O
                r2 = c1;
                c2 = r1;
                //Initialize matrix O
                O = new double *[r2];
                for (int i = 0; i < r2; i++) {
                    O[i] = new double[c2];
                }
                //Transpose M to O and show it to user
                Transpose(M, O, r1, c1);
                cout << "The result is: " << endl;
                printMatrix(O, r2, c2);
                Release(M, r1);
                Release(O, r2);
                break;
            }

                //Do determinant
            case 5: {
                //Input row and column of matrix M
                auto input1 = input_r_c(r1, c1);
                r1 = input1.a;
                c1 = input1.b;
                //Judge if r1=c1=3
                if (r1 != 3 || c1 != 3) {
                    cout << "Error!" << endl;
                    break;
                }
                //Initialize matrix M
                M = new double *[r1];
                for (int i = 0; i < r1; i++) {
                    M[i] = new double[c1];
                }
                //Input elements to M and show it to user
                inputMatrix(M, r1, c1);
                printMatrix(M, r1, c1);

                //Calculate the determinant and show it to user
                det = Determinant(M, r1);
                cout << "The result is: " << "det=" << det << endl;
                Release(M, r1);
                break;
            }
            case 6: {
                //Input row and column of matrix M
                auto input1 = input_r_c(r1, c1);
                r1 = input1.a;
                c1 = input1.b;
                //Judge if r1=c1=3
                if (r1 != 3 || c1 != 3) {
                    cout << "Error!" << endl;
                    break;
                }
                //Initialize matrix M
                M = new double *[r1];
                for (int i = 0; i < r1; i++) {
                    M[i] = new double[c1];
                }
                //Input elements to M and show it to user
                inputMatrix(M, r1, c1);
                printMatrix(M, r1, c1);

                //Judge if there is an inverse
                det = Determinant(M, r1);
                if (det == 0) {
                    cout << "Error!" << endl;
                    Release(M, r1);
                    break;
                }

                //Initialize matrix O
                O = new double *[r1];
                for (int i = 0; i < r1; i++) {
                    O[i] = new double[c1];
                }

                //Calculate and show it to user
                Inverse(M, O, r1);
                cout << "The result is: " << endl;
                printMatrix(O, r1, c1);
                Release(M, r1);
                Release(O, r1);
                break;
            }
            default: {
                cout << "Error!" << endl;
            }
        }
        //Show another menu to user to continue
        printmenu();
        cin>>x;
    }

    cout<<"Over!"<<endl;
    return 0;
}