#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    int x=4, y=6;
    int matrix[x][y];// = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};
    for(int i = 0; i<x; i++)
    {
        for(int j = 0; j<y; j++)
        {
            matrix[i][j] = i*y + j;
        }
    }
    for(int i = 0; i<x; i++)
    {
        for(int j = 0; j<y; j++)
        {
            cout<<setw(3)<<matrix[i][j];
        }
        cout<<endl;
    }

    cout<<"******************************************\n";
    for(int i = 0; i<y; i++)
    {
        if(i%2 == 0)
        {
            for(int j = 0; j<x; j++)
            {
                cout<<setw(3)<<matrix[j][i];
            }
        }
        else
        {
            for(int j = x-1; j>=0; j--)
            {
                cout<<setw(3)<<matrix[j][i];
            }
        }
        cout<<endl;
    }
    cout<<endl;
}
