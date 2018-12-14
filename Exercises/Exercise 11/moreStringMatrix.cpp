#include<iostream>
#include<iomanip>
using namespace std;

void printStrMat(char strMat[][100][100], int sizeX, int sizeY)
{
    for(int i = 0; i<sizeX; i++)
    {
        for(int j = 0; j<sizeY; j++)
        {
            cout<<setw(30)<<strMat[i][j];
        }
        cout<<endl;
    }
}

int strlen2(char* str){
    int i;
    for(i = 0; str[i]; i++);
    return i;
}

char* strcat2(char* destination, char* source)
{
    int i;
    int destLength = strlen2(destination);
    for(i = 0; source[i]; i++)
    {
        destination[destLength + i] = source[i];
    }
    return destination;
}

void strcatMat(char destination[][100][100], char source[][100][100], int sizeX, int sizeY)
{
    for(int i = 0; i<sizeX; i++)
    {
        for(int j = 0; j<sizeY; j++)
        {
            strcat2(destination[i][j], source[i][j]);
        }
    }
}

void func1(char* result){
    char str[100];
    return str;
}

int main()
{
    char strM1[100][100][100] = {{"asd", "123", "Hello!"},
    {"second line", "next element", "world"},
    {"third line", "more elements", "I'm a string!"}};
    char strM2[100][100][100] = {{"qwerty", "hey","class"},
    {"more lines","more elements","how are you doing?"},
    {"even more lines", "and elements", "also a string"}};

    strcatMat(strM1, strM2, 3, 3);
    printStrMat(strM1, 3, 3);
    cout<<func1;

}
