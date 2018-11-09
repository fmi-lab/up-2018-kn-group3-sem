#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {5,3,7,33,60,23,51,13,74,300};

    int maximum = arr[0];
    int minimum = arr[0];

    for(int i = 0; i<10; i++)
    {
        for (int j = 0; j<10 - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i = 0; i<10; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
