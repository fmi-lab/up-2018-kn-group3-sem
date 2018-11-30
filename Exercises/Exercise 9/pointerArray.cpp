#include<iostream>

using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    cout<<*arr;
    cout<<*(arr + 2);
    cout<<(arr == &arr[0]);
    cout<<((arr + 4) == &arr[4]);
}
