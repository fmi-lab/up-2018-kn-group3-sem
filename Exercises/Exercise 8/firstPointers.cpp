#include<iostream>

using namespace std;

int main(){
    int x = 4;
    cout<<&x<<endl;
    int* p = &x;
    cout<<(p == &x)<<endl;
    *p = 10;
    cout<<p<<endl;

    int y = 6;

    int& p2 = y;

    cout<<(&p2 == &y);
}
