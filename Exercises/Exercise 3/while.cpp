#include <iostream>

using namespace std;


/// Da se nameri broqt na chetnite cifri v zapisa na proizvolno dulgo chislo.
int main(){

    int number;
    cin>>number;

    int counter = 0;
    int currentDigit;
    while(number){
            cout << "number = "<<number<<endl;
        currentDigit = number % 10;
        number /= 10;
            cout << "currentDigit = "<<currentDigit<<endl;
        if(currentDigit % 2 == 0){
            counter ++;
            cout<<"counter = "<<counter<<endl;
        }
    }

    cout <<"Broqt na chetnite cifri v chisloto e: "<<counter<<endl;

return 0;
}
