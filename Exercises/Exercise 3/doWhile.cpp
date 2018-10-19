#include<iostream>
using namespace std;

int main()
{

    int counter = 0;

    ///Не влизаме в цикъла.
    while (counter != 0){
        counter++;
        cout<<counter<<endl;
    }

    counter = 0;

    ///Влизаме в цикъла след като изпълним стъпката => безкраен цикъл.
    do{
        counter++;
        cout<<counter<<endl;
    } while (counter != 0);

    return 0;
}
