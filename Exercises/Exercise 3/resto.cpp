#include<iostream>
using namespace std;

int main()
{
    int sum;
    cin>>sum;

    int ednolevki=0, dvulevki=0, petolevki=0;

    int currentSum = 0;

    while(currentSum <= sum)
    {
        while(currentSum <= sum)
        {
            while(currentSum <= sum)
            {
                ednolevki ++;
                currentSum += 1;
                if(currentSum == sum)
                {
                    cout<<"broi ednolevki = "<<ednolevki<<"\nbroi dvulevki = "<<dvulevki<<"\nbroi petolevki = "<<petolevki<<endl;
                    cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
                }
            }
            currentSum -= ednolevki;
            ednolevki = 0;
            dvulevki ++;
            currentSum += 2;
            if(currentSum == sum)
            {
                cout<<"broi ednolevki = "<<ednolevki<<"\nbroi dvulevki = "<<dvulevki<<"\nbroi petolevki = "<<petolevki<<endl;
                cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
            }
        }
        currentSum -= dvulevki * 2;
        dvulevki = 0;
        petolevki ++;
        currentSum += 5;
        if(currentSum == sum)
        {
            cout<<"broi ednolevki = "<<ednolevki<<"\nbroi dvulevki = "<<dvulevki<<"\nbroi petolevki = "<<petolevki<<endl;
            cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
        }
    }

    return 0;
}
