#include<iostream>

using namespace std;

int main(){


    for(int i = 0; i<10; i++){
        cout<<i<<endl;
    }

    for(int i = 0; i<10; ++i){ ///Nqma razlika
        cout<<i<<endl;
    }


    for(int i = 10; i > 0; i--){
        cout<<i<<endl;
    }


    for(int i = 0, j = 10; i + j > 0; j-= 2, i++){
        cout<<i<<' '<<j<<endl;
    }

    int i = 0;

    int sum = ++i + 5;

    cout << sum<<endl;

    i = 0;

    sum == i++ + 5;

    i == 1 ? cout<<"i = 1\n" : cout<<"i != 1\n";

    return 0;
}
