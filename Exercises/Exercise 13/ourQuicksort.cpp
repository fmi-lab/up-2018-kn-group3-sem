#include<iostream>
using namespace std;

void swap2(double& num1, double& num2){
    double num3;
    num3 = num1;
    num1 = num2;
    num2 = num3;
}

int partition1(int lo, int hi, double* arr){
    double pivot = arr[hi];
    int i = lo - 1;
    for(int j = lo; j<hi; j++){
        if(pivot > arr[j]){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap2(arr[i+1], arr[hi]);
    return i+1;
}

void quicksort(int lo, int hi, double* arr ){
    if(lo<hi){
        int sorted = partition1(lo, hi, arr);
        quicksort(lo, sorted-1, arr);
        quicksort(sorted+1, hi, arr);
    }
}

int main(){
    double arr[] = {40, 23, 5, -52, 43, 10, -0.5, 34.56};
    quicksort(0, 6, arr);
    for(int i = 0; i<8; i++){
        cout<<arr[i]<<' ';
    }
}
