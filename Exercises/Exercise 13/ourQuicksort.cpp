#include<iostream>
using namespace std;

void swap1(double& num1, double& num2)
{
    double num3 = num1;
    num1 = num2;
    num2 = num3;
}

int partition1(double* arr, int lo, int hi)
{
    double pivot = arr[hi];
    int i = lo - 1;

    for(int j = lo; j<hi; j++)
    {
        if(pivot > arr[j])
        {
            i++;
            swap1(arr[i], arr[j]);
        }
    }
    swap1(arr[i+1], arr[hi]);
    return i+1;
}

void quicksort(double* arr, int lo, int hi )
{
    if(lo<hi) /// We had accidentally used while instead of an if
    {
        int sorted = partition1(arr, lo, hi);

//        cout<<"lo = "<<lo<<", hi = "<<hi<<", sorted element = "<< arr[sorted]<<endl;

        quicksort(arr, lo, sorted-1);
        quicksort(arr, sorted+1, hi);
    }
}

int main()
{
    double arr[] = {40, 23, 5, -52, 43, 10, -0.5, 34.56};
    double arr1[] = {450, 52.7, 0, -65, 3.9, -75.9, 24, 64, 0.5, -23};
    double arr2[] = {3, 4, 1, 5, 2, 6, 3.4, -5.3, -4, 3.5};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    quicksort(arr1, 0, n-1);
    for(int i = 0; i<n; i++)
    {
        cout<<arr1[i]<<", ";
    }
}
