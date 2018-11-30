#include<iostream>

using namespace std;

int main(){
    char str[50] = "Hello world!";
    int i;
    for(i = 0; str[i]; i++);
    cout<<i;
    return 0;
}
