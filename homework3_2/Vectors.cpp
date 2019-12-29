//Haocong Wang 2019/09/25
//Use vector to perform matrix operations

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int r1, c1;                   //r1 and c1 represent the number of rows and column of matrix 1 respectively
int r2, c2;                   //r2 and c2 represent the number of rows and column of matrix 2 respectively
double det = 0;                //det is the result of determinant

//Function to show menu to users
void printmenu() {
    cout << "Menu" << endl;
    cout << "Choice 1: Addition" << endl;
    cout << "Choice 2: Subtraction" << endl;
    cout << "Choice 3: Multiplication" << endl;
    cout << "Choice 4: Transpose" << endl;
    cout << "Choice 5: Determinant" << endl;
    cout << "Choice 6: Inverse" << endl;
    cout << "Choice 7: Quit" << endl;
    cout << "Please make your choice: " << endl;
}

//Use a struct to return 2 values
struct RetVal {
    int a;
    int b;
};

//Function to input numbers of rows and columns of matrix
RetVal input_r_c(int r, int c) {
    cout << "Please input the number of rows: ";
    cin >> r;
    while (r > 10 || r < 1) {
        cout << "Please input an integer from 1 to 10" << endl;
        cin >> r;
    }
    cout << endl;
    cout << "Please input the number of columns: ";
    cin >> c;
    while (c > 10 || c < 1) {
        cout << "Please input an integer from 1 to 10" << endl;
        cin >> c;
    }
    cout << endl;
    return {.a=r, .b=c};
}

//Function to input elements to a matrix
void inputVector(vector<vector<double> > &M, int r, int c) {
    vector<double> row;          //Use a 1-D vector to contain row
    cout << "Please enter elements for the matrix: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            double P;
            cin >> P;
            M[i][j]=P;
        }
    }
}

//Function to output matrix
void printVector(const vector<vector<double> > &M, int r, int c) {
    cout << "The matrix is: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << setw(5) << M[i][j];
        }
        cout << endl;
    }
}

//Function to initialize vector
void Initial(vector<vector<double> > &M, int r, int c) {
    vector<double> row;          //Use a 1-D vector to contain row
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            row.push_back(0);
        }
        M.push_back(row);
        //Release row
        row.erase(row.begin(), row.end());
    }
}

//Function to add 2 matrices
void Addition(vector<vector<double> > &M, vector<vector<double> > &N, vector<vector<double> > &O, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            O[i][j] = M[i][j] + N[i][j];
        }
    }
}

//Function to subtract 2 matrices
void Subtraction(vector<vector<double> > &M, vector<vector<double> > &N, vector<vector<double> > &O, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            O[i][j] = M[i][j] - N[i][j];
        }
    }
}

//Function to multiply 2 matrices
void Multiplication(vector<vector<double> > &M, vector<vector<double> > &N, vector<vector<double> > &O, int rm, int cm,
                    int cn) {
    for (int i = 0; i < rm; i++) {
        for (int j = 0; j < cn; j++) {
            for (int k = 0; k < cm; k++) {
                O[i][j] += M[i][k] * N[k][j];
            }
        }
    }
}

//Function to transpose a matrix
void Transpose(vector<vector<double> > &M, vector<vector<double> > &N, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            N[j][i]=0;
            N[j][i] = M[i][j];
        }
    }
}

//Function to calculate determinant of a matrix
double Determinant(vector<vector<double> > &M, int r) {
    //Use a 2-D vector P to store algebraic remainder
    vector<vector<double> > P;
    //Initialize P
    P.resize(r);
    for (int i = 0; i < r; i++) {
        P[i].resize(r);
    }
    Initial(P, r, r);
    double sum = 0;                //Use sum to store the result
    //Calculate determinant
    if (r == 1) {
        return M[0][0];
    } else if (r == 2) {
        return (M[0][0] * M[1][1] - M[0][1] * M[1][0]);
    } else if (r == 3) {
        return M[0][0] * M[1][1] * M[2][2] + M[0][1] * M[1][2] * M[2][0] + M[0][2] * M[1][0] * M[2][1] -
               M[0][2] * M[1][1] * M[2][0] - M[1][2] * M[2][1] * M[0][0] - M[2][2] * M[1][0] * M[0][1];
    } else {
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
        return sum;
    }
}

//Function to adjoint for calculating inverse
void Adjoint(vector<vector<double> > &M, vector<vector<double> > &N, int r) {
    vector<vector<double> > P;              //Use P to store algebraic remainder
    //Initialize P
    P.resize(r);
    for (int i = 0; i < r; i++) {
        P[i].resize(r);
    }
    Initial(P, r, r);
    //Calculate adjoint
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r; j++) {
            for (int k = 0; k < r - 1; k++) {
                for (int l = 0; l < r - 1; l++) {
                    P[k][l] = M[k >= i ? k + 1 : k][l >= j ? l + 1 : l];
                }
            }
            //Use the function determinant
            N[j][i] = Determinant(P, r - 1);
            if ((i + j) % 2 == 1) {
                N[j][i] = -N[j][i];
            }
        }
    }
}

//Function to inverse
void Inverse(vector<vector<double> > &M, vector<vector<double> > &N, int r) {
    //Use div and function Determinant to calculate
    double div = Determinant(M, r);
    vector<vector<double> > P;
    //Initialize P
    P.resize(r);
    for (int i = 0; i < r; i++) {
        P[i].resize(r);
    }
    Initial(P, r, r);
    //Calculate adjoint
    Adjoint(M, P, r);
    //Use for loop to inverse
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r; j++) {
            N[i][j] = P[i][j] / div;
        }
    }
}

int main() {
    //Define 4 vectors
    vector<vector<double> > M;
    vector<vector<double> > N;
    vector<vector<double> > O;
    vector<vector<double> > P;

    //Show the menu to user
    printmenu();
    int x;                     //x is users' choice
    cin >> x;
    while (x != 7) {
        switch (x) {
            //Do addition
            case 1: {
                //Input row and column of matrix M
                auto input1 = input_r_c(r1, c1);
                r1 = input1.a;
                c1 = input1.b;
                //Input elements to M and show it to user
                Initial(M,r1,c1);
                inputVector(M, r1, c1);
                printVector(M, r1, c1);

                //Input row and column of matrix N
                auto input2 = input_r_c(r2, c2);
                r2 = input2.a;
                c2 = input2.b;
                //Judge if M and N are same sized
                if (r1 != r2 || c1 != c2) {
                    cout << "Error!" << endl;
                    break;
                }
                //Input elements to N and show it to user
                Initial(N,r2,c2);
                inputVector(N, r2, c2);
                printVector(N, r2, c2);

                //Add M and N into O and show O to user
                Initial(O,r1,c1);
                Addition(M, N, O, r1, c1);
                cout << "The result is: " << endl;
                printVector(O, r1, c1);
                break;
            }

                //Do subtraction
            case 2: {
                //Input row and column of matrix M
                auto input1 = input_r_c(r1, c1);
                r1 = input1.a;
                c1 = input1.b;
                //Input elements to M and show it to user
                Initial(M,r1,c1);
                inputVector(M, r1, c1);
                printVector(M, r1, c1);

                //Input row and column of matrix N
                auto input2 = input_r_c(r2, c2);
                r2 = input2.a;
                c2 = input2.b;
                //Judge if M and N are same sized
                if (r1 != r2 || c1 != c2) {
                    cout << "Error!" << endl;
                    break;
                }
                //Input elements to N and show it to user
                Initial(N,r2,c2);
                inputVector(N, r2, c2);
                printVector(N, r2, c2);

                //Subtract M by N into O and show it to user
                Initial(O,r1,c1);
                Subtraction(M, N, O, r1, c1);
                cout << "The result is: " << endl;
                printVector(O, r1, c1);
                break;
            }

                //Do multiplication
            case 3: {
                //Input row and column of matrix M
                auto input1 = input_r_c(r1, c1);
                r1 = input1.a;
                c1 = input1.b;

                //Input elements to M and show it to user
                Initial(M,r1,c1);
                inputVector(M, r1, c1);
                printVector(M, r1, c1);

                //Input row and column of matrix N
                auto input2 = input_r_c(r2, c2);
                r2 = input2.a;
                c2 = input2.b;
                //Judge if c1 equals r2
                if (c1 != r2) {
                    cout << "Error!" << endl;
                    break;
                }
                //Input elements to N and show it to user
                Initial(N,r2,c2);
                inputVector(N, r2, c2);
                printVector(N, r2, c2);

                //Multiply M by N into P and show it to user
                Initial(P,r1,c2);
                Multiplication(M, N, P, r1, c1, c2);
                cout << "The result is: " << endl;
                printVector(P, r1, c2);
                break;
            }

                //Do transpose
            case 4: {
                //Input row and column of matrix M
                auto input1 = input_r_c(r1, c1);
                r1 = input1.a;
                c1 = input1.b;
                //Input elements to M and show it to user
                Initial(M,r1,c1);
                inputVector(M, r1, c1);
                printVector(M, r1, c1);

                //Input row and column of matrix N
                r2 = c1;
                c2 = r1;
                //Transpose M to N and show it to user
                Initial(N,r2,c2);
                Transpose(M, N, r1, c1);
                cout << "The result is: " << endl;
                printVector(N, r2, c2);
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
                //Input elements to M and show it to user
                Initial(M,r1,c1);
                inputVector(M, r1, c1);
                printVector(M, r1, c1);

                //Calculate the determinant and show it to user
                det = Determinant(M, r1);
                cout << "The result is: " << "det=" << det << endl;
                break;
            }

                //Do inverse
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
                //Input elements to M and show it to user
                Initial(M,r1,c1);
                inputVector(M, r1, c1);
                printVector(M, r1, c1);

                //Judge if there is an inverse
                det = Determinant(M, r1);
                if (det == 0) {
                    cout << "Error!" << endl;
                    break;
                }

                //Calculate and show it to user
                Initial(O,r1,c1);
                Inverse(M, O, r1);
                cout << "The result is: " << endl;
                printVector(O, r1, c1);

                break;
            }

            default: {
                cout << "Error!" << endl;
            }
        }
        //Show another menu to user to continue
        printmenu();
        cin >> x;
    }

    cout << "Over!" << endl;
    return 0;
}