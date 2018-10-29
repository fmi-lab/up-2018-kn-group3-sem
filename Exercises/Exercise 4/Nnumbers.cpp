#include <iostream>
using namespace std;

int main(){


    int N;
    cin >> N;
    int number;
    double minNum, maxNum;
    int counter = 0;

    cin>>number;
    maxNum = minNum = number; /// Operator = se izpalnqva otlqvo nadqsno
    N--;

    if(number % 3 == 1){
        counter ++;
    }


    while(N){

        cin>>number;
        if(number < minNum){
            minNum = number;
        } else if (number > maxNum){
            maxNum = number;
        }
        if(number % 3 == 1){
            counter++;
        }

        N--;
    }

    cout<<"maxNum = "<<maxNum<<endl<<"minNum = "<<minNum<<endl<<"counter = "<<counter<<endl;


}
