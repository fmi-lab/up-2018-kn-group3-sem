///Ne e gotovo!

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    const int x=4, y=6;
    int height = 4, width = 6;

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

    for(int j = 0; height > 0 && width > 0; j++)
    {

        for(int i = (x - height)/2; i < x - (x - height)/2; i++)
        {
            cout<<"j = "<<j<<endl;
            cout<<setw(3)<<matrix[i][(y-width)/2];
        }

        for(int i = (y - width)/2; i < y - (y - width)/2; i++)
        {
            cout<<setw(3)<<matrix[x-(x-height)/2][i];
        }

        for(int i = x - (x - height)/2 - 1; i < (x - height)/2; i++)
        {
            cout<<setw(3)<<matrix[i][(y-width)/2];
        }

        for(int i = y - (y - width)/2; i < width - (y - width)/2; i++)
        {
            cout<<setw(3)<<matrix[(x-height)/2][i];
        }

        width -=2;
        height-=2;
        cout<<endl;

    }

















}

