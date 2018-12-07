#include<iostream>
#include<iomanip>
using namespace std;

void func(int& a){
    a = 10;
}

void printArray(int arr[100]){
    for(int i = 0; i<100; i++){
        cout<<setw(3)<<arr[i];
    }
    cout<<endl;
}

void fillArray(int arr[10000], int sizeA){
    for(int i = 0; i<sizeA; i++){
        arr[i] = i;
    }
}

int* returnArray(int arr[100]){
    return arr;
}

void printMatrix(int matrix[100][100], int sizeX, int sizeY){
    for(int i = 0; i<sizeX; i++){
        for(int j = 0; j<sizeY; j++){
            cout<<setw(3)<<matrix[i][j];
        }
        cout<<endl;
    }
}

void fillMatrix(int matrix[100][100], int sizeX, int sizeY){
    for(int i = 0; i<sizeX; i++){
        for(int j = 0; j<sizeY; j++){
            matrix[i][j] = i*sizeY + j;
        }
    }
}

int main(){
    int x = 0;
    func(x);
    cout<<x;
    int arr[10000] = {0};
    fillArray(arr, 100);
    printArray(arr);
    int* arr2 = returnArray(arr);
    for(int i = 0; i<5; i++){
        cout<<arr2[i]
    }
    cout<<arr<<endl<<arr2<<endl;
    arr[5] = 42;
    cout<<arr2[5];
    int matrix[50][100] = {0};
    fillMatrix(matrix, 5, 5);
    printMatrix(matrix, 5, 5);

}
