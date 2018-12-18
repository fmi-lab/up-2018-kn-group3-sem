#include<iostream>
using namespace std;

int main(){
    int arr[10][20];
//    arr[0][5] = 42;
//    arr[3][10] = 123;
    cout<<(**arr == arr[0][0]);
    cout<<(*arr == arr[0]);
    cout<<(*arr+1 == &arr[0][1]);
    cout<<(*(*arr+1) == arr[0][1]);
    cout<<(*(arr+1) == arr[1]);
    cout<<(*(*(arr+1)) == arr[1][0]);
    cout<<(*(*(arr+3)+10) == arr[3][10]);
    cout<<(*(*arr + 3*20 + 10) == arr[3][10]);

    char arr3[10][20][30];
//    arr3[2][3][5] = 'N';

    cout<<(*(*(*(arr3+2)+3)+5) == arr3[2][3][5]);
    cout<<(*(*(*arr3+2*20) + 3*30 + 5) == arr3[2][3][5]);
    cout<<(*(**arr3 + 2*30*20 + 3*30 + 5) == arr3[2][3][5]);
    cout<<(*(**(arr3+2) + 3*30 + 5) == arr3[2][3][5]);
    return 0;
}
