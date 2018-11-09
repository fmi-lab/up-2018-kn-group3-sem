#include <iostream>
using namespace std;

int main(){

    char str[50] = "My second string!";

    for(int i = 0; str[i]; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] += 'A' - 'a';
        }
    }

    cout<<str;
    return 0;
}

