#include<iostream>

using namespace std;

int main(){
    char str[50] = "Hello world!";
    char str2[50] = "Hello world!2";
    int i;
    bool flag = false;
    for(i = 0; str[i] && str2[i] && !flag; i++){
        if(str[i] != str2[i]){
            cout<<str[i] - str2[i]<<endl;
            flag = true;
        }
    }
    if(str[i]!=str2[i] && !flag){
        cout<<str[i]-str2[i]<<endl;
        flag = true;
    }
    if(!flag){
        cout<<0<<endl;
    }
    return 0;
}

