#include <iostream>
using namespace std;

double sum (double x, double y){
    return x+y;
}

double tripleSum(double x, double y, double z){
    return sum(sum(x, y), z);
}

void print(char str[100]){
    cout<<str<<endl;
}

void printArrInt(int arr[100], int sizeArr, int position){
    if(position<sizeArr){
        printArrInt(arr, sizeArr, position+1);
        cout<<arr[position];
    }
}

int main(){
    double a = 3, b = 5;
    cout<<sum(a,b)<<endl;
    cout<<tripleSum(a, 4, b)<<endl;
    print("Hello world!");
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printArrInt(arr, 10, 0);
}
