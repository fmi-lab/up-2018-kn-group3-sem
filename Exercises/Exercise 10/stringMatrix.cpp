#include<iostream>
#include<iomanip>
using namespace std;

void printStrMat(char strMat[100][100][100], int sizeX, int sizeY)
{
    for(int i = 0; i<sizeX; i++)
    {
        for(int j = 0; j<sizeY; j++)
        {
            cout<<setw(15)<<strMat[i][j];
//            for(int k = 0; strMat[i][j][k]; k++)
//            {
//                cout<<strMat[i][j][k];
//            }
//            cout<<'\t';
        }
        cout<<endl;
    }
}

int strSize(char str[100])
{
    int i;
    for(i = 0; str[i]; i++);
    return i;
}


int printLongestStrByRow(char strMat[100][100][100], int row, int sizeX, int sizeY)
{
    int currentMax = 0;
    int strIndex = 0;
    for(int j = 0; j<sizeY; j++)
    {
        if(strSize(strMat[row][j]) > currentMax)
        {
            currentMax = strSize(strMat[row][j]);
            strIndex = j;
        }
    }
//    cout<<strMat[row][strIndex]<<endl;
    return currentMax;
}

int* printLongestStrEveryRowWrong(char strMat[100][100][100], int sizeX, int sizeY)
{
    int result[100];
    for(int i = 0; i<sizeX; i++)
    {
        result[i] = printLongestStrByRow(strMat, i, sizeX, sizeY);
        cout<<setw(3)<<result[i]<<endl;
    }
    return result; /// warning: address of local variable 'result' returned
                /// We return the address of the array declared in the function and then free the memory.
                /// WRONG!!!
}

void printLongestStrEveryRow(char strMat[100][100][100], int sizeX, int sizeY, int* result) /// We pass the array we want to write in as a parameter.
                                                                                            /// CORRECT!!!
{
    for(int i = 0; i<sizeX; i++)
    {
        result[i] = printLongestStrByRow(strMat, i, sizeX, sizeY);
        cout<<setw(3)<<result[i]<<endl;
    }
}

void reverseStr(char str[100]){
    int sizeS = strSize(str);
    for(int i = 0; i<sizeS/2; i++){
        swap(str[i], str[sizeS-i-1]); /// We had forgotten to decrease the value with 1 in str[sizeS - i - 1].
                                      /// We used to put the '\0' sign on the first position of the string.
                                      /// That's why the program didn't work as expected.
    }
}

void reverseStrMat(char strMat[100][100][100], int sizeX, int sizeY){
    for(int i = 0; i<sizeX; i++){
        for(int j = 0; j<sizeY; j++){
            reverseStr(strMat[i][j]);
        }
    }
}

int main()
{
    char strM[100][100][100] = {{"asd", "123", "Hello!"}, {"second line", "next element", "world"}, {"third line", "more elements", "I'm a string!"}};
    printStrMat(strM, 3, 3);
    int arr[100];
    printLongestStrEveryRow(strM, 3, 3, arr);
    for(int i = 0; i<3; i++){
        cout<<"result_array["<<i<<"] = "<<arr[i]<<endl;
    }
    int* arr2 = printLongestStrEveryRowWrong(strM, 3, 3);
    for(int i = 0; i<3; i++){
        cout<<"result_array["<<i<<"] = "<<arr2[i]<<endl;
    }
    cout<<printLongestStrByRow(strM, 1, 3, 3)<<endl;

    reverseStrMat(strM, 3, 3);
    printStrMat(strM, 3, 3);
}
