#include<iostream>

using namespace std;

int main(){
    char str[50] = "Hello world!";
    char str2[50];
    int i;
    for(i = 0; str[i]; i++){
        str2[i] = str[i];
    }
    str2[i] = '\0';
    cout<<str2;
    return 0;
}
