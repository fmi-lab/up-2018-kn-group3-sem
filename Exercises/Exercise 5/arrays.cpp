#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {5,3,7,33,60,23,51,13,74,300};

    int maximum = arr[0];
    int minimum = arr[0];

    for(int i = 0; i<10; i++)
    {
        if(maximum < arr[i])
        {
            maximum = arr[i];
        }
        if(minimum > arr[i])
        {
            minimum = arr[i];
        }
    }

    cout<<"maximum = "<<maximum<<endl;
    cout<<"minimum = "<<minimum<<endl;

    return 0;
}
