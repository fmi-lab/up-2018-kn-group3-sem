#include<iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int currentSum = 0, currentNumber, counter = 0;
    int arr[99999];
    bool flag = false;

    for (int i = 0; i<N; i++)
    {
        cin>>arr[i];
        currentSum = arr[i-1];
        for(int j = i-2; j>=0  && !flag; j--)
        {
            currentSum += arr[j];
            if(arr[i] == currentSum)
            {
                counter++;
                flag = true;
            }
        }
        flag = false;
    }

    cout<<"counter = "<<counter<<endl;

    return 0;
}
