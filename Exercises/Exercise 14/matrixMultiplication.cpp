#include<iostream>
#include<iomanip>
using namespace std;

void matrixMult(int mat1[4][4], int mat2[4][4], int result[4][4]){
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            for(int k = 0; k<4; k++){
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void matrixMultRecHelper(int mat1[4][4], int mat2[4][4], int result[4][4], int row, int column, int element){
    result[row][column] += mat1[row][element] * mat2[element][column];
    if(element < 3){
        matrixMultRecHelper(mat1, mat2, result, row, column, element + 1);
    } else if(column < 3){
        matrixMultRecHelper(mat1, mat2, result, row, column + 1, 0 );
    } else if(row < 3){
        matrixMultRecHelper(mat1, mat2, result, row + 1, 0, 0);
    }
}

void matrixMultRec(int mat1[4][4], int mat2[4][4], int result[4][4]){
    matrixMultRecHelper(mat1, mat2, result, 0, 0, 0);
}

void printMatrix(int mat[4][4]){
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            cout<<setw(4)<<mat[i][j];
        }
        cout<<endl;
    }
}

int main(){
    int mat1[4][4] = {{1, 2, 3, 1}, {2, 4, 1, -1}, {-1, 0, 2, 3}, {0, 1, 2, 3}};
    int mat2[4][4] = {{1, -1, 1, -1}, {0, -2, 1, 1}, {3, -2, 1, 0}, {1, 1, 1, 1}};
    int result[4][4];
    int result2[4][4];
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            result[i][j] = 0;
            result2[i][j] = 0;
        }
    }
    matrixMult(mat1, mat2, result);
    printMatrix(result);
    cout<<endl;

    matrixMultRec(mat1, mat2, result2);
    printMatrix(result2);
}













