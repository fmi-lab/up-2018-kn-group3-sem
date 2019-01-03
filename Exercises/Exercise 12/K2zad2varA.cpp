#include<iostream>
using namespace std;

unsigned long countSums(long* arr1, long* arr2, long* arr3, int n)
{
    int counter = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            for(int k = 0; k<n; k++)
            {
                if(arr1[i]*arr1[i] == arr2[j]*arr2[j] + arr3[k]*arr3[k] ||
                        arr2[j]*arr2[j] == arr1[i]*arr1[i] + arr3[k]*arr3[k] ||
                        arr3[k]*arr3[k] == arr1[i]*arr1[i] + arr2[j]*arr2[j])
                {
                    counter++;
                    cout<<arr1[i]<<", "<<arr2[j]<<", "<<arr3[k]<<endl;
                }
            }
        }
    }
    return counter;
}
//{1,5,3}, {2,4,50}, {6,3,0} => (1,2,3), (5,2,3), (1,4,3)

int main()
{
    long arr1[20] = {1,5,3,0};
    long arr2[20] = {2,4,50,0};
    long arr3[20] = {6,3,0,40};
    cout<<countSums(arr1, arr2, arr3, 4);
}
