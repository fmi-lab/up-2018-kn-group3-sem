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

int* printLongestStrEveryRow(char strMat[100][100][100], int sizeX, int sizeY)
{
    int arr[100];
    for(int i = 0; i<sizeX; i++)
    {
        arr[i] = printLongestStrByRow(strMat, i, sizeX, sizeY);
        cout<<setw(3)<<arr[i]<<endl;
    }
    return arr;
}

void reverseStr(char str[100]){
    int sizeS = strSize(str);
    for(int i = 0; i<sizeS/2; i++){
        swap(str[i], str[sizeS-i-1]); /// We forgot to decrease the value with 1 in str[sizeS - i - 1]. That's the program didn't work as expected.
    }
//    cout<<"reversed( "<<str<<" )"<<endl;
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
    char strM[100][100][100] = {{"asd", "123", "Hello!"}, {"second line", "next element", "world"}};
    printStrMat(strM, 2, 3);
    int* arr;
    arr = printLongestStrEveryRow(strM, 2, 3);
//    for(int i = 0; i<2; i++){
//        cout<<i<<endl;
//        cout<<arr[0]<<endl;
//    }
    cout<<printLongestStrByRow(strM, 1, 2, 3)<<endl;

    reverseStrMat(strM, 2, 3);
    printStrMat(strM, 2, 3);
}
