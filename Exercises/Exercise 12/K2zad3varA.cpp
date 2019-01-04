#include<iostream>
using namespace std;

char* strcat(char strArr[20][51], int n, bool flags[20], char* result)
{
    int k=0;
    for(int i = n-1; i>=0; i--)
    {
        if(!flags[i])
        {
            for(int j = 0; strArr[i][j]; j++)
            {
                result[k] = strArr[i][j];
                k++;
            }
        }
    }
    return result;
}

int main()
{
    char strArr[20][51];
    int n;
    cin>>n;
    bool smallLetters[20];
    bool flag = false;
    for(int i = 0; i<n && !flag; i++)
    {
        cin>>strArr[i];
        for(int j = 0; strArr[i][j]; j++)
        {
            if(!(strArr[i][j] >= 'a' && strArr[i][j]<= 'z'))
            {
                flag = true;
            }
        }
        smallLetters[i] = flag;
        flag = false;
    }
    char res[1001];
    cout<<strcat(strArr, n, smallLetters, res);
}
