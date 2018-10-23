#include<iostream>
using namespace std;

int main()
{
    int sum;
    cin>>sum;

    int ednolevki=0, dvulevki=0, petolevki=0;

    int currentSum = 0;
    int counter = 0;

    while(currentSum < sum)
    {
        while(currentSum < sum)
        {
            ednolevki = sum - currentSum;
            cout<<"broi ednolevki = "<<ednolevki<<"\nbroi dvulevki = "<<dvulevki<<"\nbroi petolevki = "<<petolevki<<endl;
            cout<<"***************************************************************\n";
            counter ++;
            ednolevki = 0;
            dvulevki ++;
            currentSum += 2;
        }
        cout<<"broi ednolevki = "<<ednolevki<<"\nbroi dvulevki = "<<dvulevki<<"\nbroi petolevki = "<<petolevki<<endl;
        cout<<"***************************************************************\n";
        counter ++;
        currentSum -= dvulevki * 2;
        dvulevki = 0;
        petolevki ++;
        currentSum += 5;
    }

    cout <<"Broi vazmojni kombinacii = "<<counter<<endl;

    return 0;
}
