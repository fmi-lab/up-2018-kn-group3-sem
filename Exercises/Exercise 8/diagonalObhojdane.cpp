#include<iostream>
#include<iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int sizeM = 6;
    int matrix[sizeM][sizeM];
    srand (time(NULL));

    ///Пълним масива с произволни елементи:
    for(int i = 0; i<sizeM; i++)
    {
        for(int j = 0; j<sizeM; j++)
        {
            matrix[i][j] = rand()%100;
        }
    }


    for(int i = 0; i<sizeM; i++){
        for(int j = 0; j<sizeM; j++){
            cout<<setw(3)<<matrix[i][j];
        }
        cout<<endl;
    }

    cout<<"**********************\n";

    ///Начин 1)

    for(int j = 0; j<sizeM; j++){
        for(int i = 0; i<j+1; i++){
//            cout<<setw(3)<<matrix[j-i][i];
            cout<<i<<'/'<<j-i<<' ';
        }
        cout<<endl;
    }


    for(int j = 0; j<sizeM; j++){
        for(int i = 1; i<sizeM-j; i++){
//            cout<<setw(3)<<matrix[j+1][sizeM-i];
            cout<<j+i<<'/'<<sizeM-i<<' ';
        }
        cout<<endl;
    }

    ///Начин 2)

    for(int j = 0; j<2*sizeM-1; j++)
    {
        for(int i = 0; i<j+1; i++)
        {
            if(j < sizeM)
            {
                cout<<i<<'/'<<j-i<<' ';
            }
            else if(j+i-sizeM+1<sizeM)
            {
                cout<<j+i-sizeM+1<<'/'<<sizeM-i-1<<' ';
            }
        }
        cout<<endl;
    }

    return 0;
}
