#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
//    int arr[n];
    int* arr = new int[n];
    delete arr;
    arr = new int[2*n];
}
