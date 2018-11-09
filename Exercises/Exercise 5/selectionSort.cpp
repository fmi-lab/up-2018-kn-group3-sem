#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {5,3,7,33,60,23,51,13,74,300};

    int maximum = arr[0];
    int minimum = arr[0];

    for(int i = 0; i<9; i++)
    {
        for (int j = i+1; j<10; j++)
        {
            if(arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    for(int i = 0; i<10; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
