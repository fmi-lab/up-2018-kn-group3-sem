/* C implementation QuickSort */
#include<stdio.h>
#include<iostream>

// A utility function to swap two elements
void swap2(int& a, int& b)
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
int partition2(int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = low - 1;  // Index of smaller element

    for (int j = low; j < high; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] < pivot)
        {
            i++;    // increment index of smaller element
            swap2(arr[i], arr[j]);
        }
    }
    swap2(arr[i + 1], arr[high]);
    return i + 1;
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
        int pi = partition2(arr, low, high);

        // Separately sort elements before
        // partition2 and after partition2
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
