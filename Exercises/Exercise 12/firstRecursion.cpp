#include<iostream>
using namespace std;

void printArr(int* arr, int sizeA){
    for(int i = 0; i<sizeA; i++){
        cout<<arr[i];
    }
}

void printArrRecHelper(int* arr, int sizeA, int curr){
    if(curr<sizeA){
        printArrRecHelper(arr, sizeA, curr+1);
        cout<<arr[curr];
    }
    return;
}

void printArr2(int* arr, int sizeA){
    printArrRecHelper(arr, sizeA, 0);
}

int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
//    printArr(arr, 10);
//    cout<<endl;
    printArr2(arr, 10);
}
