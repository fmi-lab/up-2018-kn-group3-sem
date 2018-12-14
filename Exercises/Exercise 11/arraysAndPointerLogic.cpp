#include<iostream>
using namespace std;
int main(){
int mat1[10][100];
    mat1[2][3] = 42;
    mat1[0][0] = 0;
    mat1[0][3] = 33;
    cout<<*(mat1)<<endl; ///mat1[0]
    cout<<**mat1<<endl; ///mat1[0][0]
    cout<<*(*mat1+3)<<endl; /// mat1[0][3]
    cout<<*(*mat1+203)<endl; ///mat1[2][3]
}
