#include<iostream>
using namespace std;

int main(){
    int arr1[10];
    cout<<(*(arr1+5) == arr1[5]);
    cout<<(*arr1+5 == arr1[0] + 5);

    int arr2[10][20];
//    arr2[0][5] = 42;
//    arr2[3][10] = 123;
    cout<<(**arr2 == arr2[0][0]);
    cout<<(*arr2 == arr2[0]);
    cout<<(*arr2+1 == &arr2[0][1]);
    cout<<(*(*arr2+1) == arr2[0][1]);
    cout<<(*(arr2+1) == arr2[1]);
    cout<<(*(*(arr2+1)) == arr2[1][0]);
    cout<<(*(*(arr2+3)+10) == arr2[3][10]);
    cout<<(*(*arr2 + 3*20 + 10) == arr2[3][10]);

    char arr3[10][20][30];
//    arr3[2][3][5] = 'N';
    cout<<(*(*(*(arr3+2)+3)+5) == arr3[2][3][5]);
    cout<<(*(*(*arr3+2*20) + 3*30 + 5) == arr3[2][3][5]);
    cout<<(*(**arr3 + 2*30*20 + 3*30 + 5) == arr3[2][3][5]);
    cout<<(*(**(arr3+2) + 3*30 + 5) == arr3[2][3][5]);
    return 0;
}
