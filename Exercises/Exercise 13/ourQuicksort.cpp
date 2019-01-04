<<<<<<< HEAD
#include<iostream>
using namespace std;

void swap2(double& num1, double& num2){
    double num3;
    num3 = num1;
    num1 = num2;
    num2 = num3;
}

int partition1(int lo, int hi, double* arr){
    double pivot = arr[hi];
    int i = lo - 1;
    for(int j = lo; j<hi; j++){
        if(pivot > arr[j]){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap2(arr[i+1], arr[hi]);
    return i+1;
}

void quicksort(int lo, int hi, double* arr ){
    while(lo<hi){
        int sorted = partition1(lo, hi, arr);
        quicksort(lo, sorted-1, arr);
        quicksort(sorted+1, hi, arr);
    }
}

int main(){
    double arr[] = {40, 23, 5, -52, 43, 10, -0.5, 34.56};
    quicksort(0, 6, arr);
    for(int i = 0; i<8; i++){
        cout<<arr[i]<<' ';
    }
}

=======
/* C implementation QuickSort */
#include<stdio.h>
#include<iostream>

// A utility function to swap two elements
void swap(int& a, int& b)
{
    int t = a;
    a = b;
    b = t;
}

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j < high; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] < pivot)
        {
            i++;    // increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[pi] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5,43,65234,1,-543,123,-32,0,213,0};
//    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
>>>>>>> 92b4d587cab838df0e00875f391d54cb30896cc8
