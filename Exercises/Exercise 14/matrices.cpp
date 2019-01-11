#include<iostream>
#include<iomanip>
using namespace std;

struct Matrix {
    double matrix[4][4];
};

int main(){
    Matrix mat1;
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            mat1.matrix[i][j] = i*4 + j;
        }
    }

    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            cout<<setw(3)<<mat1.matrix[i][j];
        }
        cout<<endl;
    }
}

