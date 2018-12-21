#include<iostream>
using namespace std;

char* strcat(char strArr[20][51], int n, char* result){
    int k=0;
    for(int i = n-1; i>=0; i--){
        for(int j = 0; strArr[i][j]; j++){
            result[k] = strArr[i][j];
            k++;
        }
    }
    return result;
}

int main(){
    char strArr[20][51];
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>strArr[i];
        for(int j = 0; strArr[i][j]; j++){
            if(strArr[i][j] >= 'a' && strArr[i][j]<= 'z'){
                strArr[i][j] = strArr[i][j] - 'a' + 'A';
            } else if(strArr[i][j] >= 'A' && strArr[i][j]<= 'Z'){
                strArr[i][j] = strArr[i][j] + 'a' - 'A';
            }
        }
    }
    char res[1001];
    cout<<strcat(strArr, n, res);
}
