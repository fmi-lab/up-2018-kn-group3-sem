#include <iostream>
using namespace std;

int main(){

    char str[50] = "adhgASTTsjd~ eikt 83DFh JFJEDLFgdsfhg~!%#$";

    int counter = 0;
    int pos = 0;



    for(int i = 0; str[i] && counter != 4; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            counter++;
            if(counter == 4){
                pos = i - 3;
                cout<<"Yes!\n";
                cout<<"pos = "<<pos<<endl;
            }
        } else {
            counter = 0;
        }
    }

    if(counter != 4){
        cout<<"No!\n";
    }

    return 0;
}

