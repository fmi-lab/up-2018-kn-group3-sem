#include<iostream>
using namespace std;

int printFib(int i, bool print){
    int curr;
    if(i>1){
        if(print){
            curr = printFib(i-1, true) + printFib(i-2, false);
        } else{
            curr = printFib(i-1, false) + printFib(i-2, false);
        }
    } else if(i==1){
        curr = 1;
    } else if(i==0){
        curr = 0;
    }
    if(print){
        cout<<curr<<endl;
    }
    return curr;
}

/// a[0] = 0;
/// a[1] = 1;
/// a[i+2] = a[i+1] + a[i];

int main(){
    printFib(20, true);
}
