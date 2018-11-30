///Напишете функция, която връща най-големия елемент
///от амтрица от естествени числа, който участва в аритметична прогресия от поне 3 елемента.
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;

int max2(int x, int y){
    if(x>y){
        return x;
    }
    return y;
}

int findBiggestEl(int matrix[100][100], int sizeX, int sizeY)
{
    int currentMax = 0, absoluteMax = 0;
    for(int i = 0; i<sizeX; i++)
    {
        for(int j = 0; j<sizeY; j++)
        {
            if(i == 0 && j > 1 || i > 0)
            {
                if(matrix[i][j-1] == ((double)matrix[i][j-2] + matrix[i][j])/2 && j>1)
                {
                    cout<<i<<'/'<<j<<' ';
                    int tempMax = max2(matrix[i][j-2], matrix[i][j]);
                    currentMax = (currentMax < tempMax) ? tempMax : currentMax;
                }
                else if(j == 1 && matrix[i][j-1] == ((double)matrix[i-1][sizeY-1] + matrix[i][j])/2)
                {
                    cout<<i<<'/'<<j<<' ';
                    int tempMax = max2(matrix[i-1][sizeY-1], matrix[i][j]);
                    currentMax = (currentMax < tempMax) ? tempMax : currentMax;
                }
                else if(j == 0 && matrix[i-1][sizeY-1] == ((double)matrix[i-1][sizeY-2] + matrix[i][j])/2)
                {
                    cout<<i<<'/'<<j<<' ';
                    int tempMax = max2(matrix[i-1][sizeY-2], matrix[i][j]);
                    currentMax = (currentMax < tempMax) ? tempMax : currentMax;
                }
                else {
                    currentMax = 0;
                }
                if(absoluteMax < currentMax)
                {
                    absoluteMax = currentMax;
                }
            }
        }
    }
    return absoluteMax;
}

void printMatrix(int matrix[100][100], int sizeX, int sizeY)
{
    for(int i = 0; i<sizeX; i++)
    {
        for(int j = 0; j<sizeY; j++)
        {
            cout<<setw(3)<<matrix[i][j];
        }
        cout<<endl;
    }
}

int main()
{
    int mat[100][100] = {{1,2,3,4}, {5,6,5,1}, {3,6,7,9}};
    srand (time(NULL));

//    ///Пълним масива с произволни елементи:
//    for(int i = 0; i<5; i++)
//    {
//        for(int j = 0; j<10; j++)
//        {
//            mat[i][j] = rand()%100;
//        }
//    }
    printMatrix(mat, 3,4);
    cout<<findBiggestEl(mat, 3,4);
}










