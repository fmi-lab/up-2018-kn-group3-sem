#include<iostream>
#include<cmath>
using namespace std;

/// We had forgotten to return the recursive calls of our function, so after we executed them
/// we used to return to the outside call and return -1 after the if clause if we hadn't guessed
/// the searched number from the first try.
/// Try to remove those returns and see how much times we are going to call the function. (Max 2)
int binarySearch(int* arr, int lo, int hi, int curr, int searched)
{
//    cout<<"lo = "<<lo<<" / "<<"hi = "<<hi<<endl;
    if(lo<=hi)
    {
        if(arr[curr] == searched)
        {
            return curr;
        }
        else if(arr[curr] > searched)
        {
//            cout<<arr[curr]<<' '<<searched<<endl;
            return binarySearch(arr, lo, curr-1, ((curr-lo)/2 + lo-1), searched);
        }
        else
//        {   cout<<arr[curr]<<' '<<searched<<endl;
            return binarySearch(arr, curr+1, hi, ((hi - (curr+1))/2 + curr+1), searched);
        }
    }
    return -1;
}

int search2(int* arr, int sizeA, int searched){
    return binarySearch(arr, 0, sizeA, sizeA/2, searched);

}

int main(){
    int arr1[] = {0,2,5,8,9,13,15,23};
    cout<<search2(arr1, 7, 12);

}






