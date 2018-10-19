#include<iostream>
using namespace std;

int main()
{
    int number;
    cin>>number;

    int counter = 1;
    int currentDigit;
    int booleanNumber = 0;

    while(number){
        currentDigit = number % 2;
        cout<<"currentDigit = "<<currentDigit<<endl;
        number /= 2;
        cout << "increment = "<<currentDigit * counter<<endl;
        booleanNumber += currentDigit * counter;
        cout<<"booleanNumber = "<<booleanNumber<<endl;
        cout<<"counter = "<<counter<<endl;
        counter*=10;
    }

    cout<<"booleanNumber = "<<booleanNumber<<endl;

    return 0;
}
