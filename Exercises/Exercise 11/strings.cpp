#include<iostream>
#include<iomanip>
using namespace std;

int strlen2(char* str){
    int i;
    for(i = 0; str[i]; i++);
    return i;
}

int strcmp2(char* str1, char* str2){
    int i;
    for(i = 0; str1[i] && str2[i]; i++){
        if(str1[i] != str2[i]){
            return str1[i] - str2[i];
        }
    }
    return str1[i] - str2[i];
}

char* strcat2(char* destination, char* source){
    int i;
    int destLength = strlen2(destination);
    for(i = 0; source[i]; i++){
        destination[destLength + i] = source[i];
    }
//    destination[destLength + i + 1] = '\0';
    return destination;
}

bool strchr2(char* str, char chr){
    for(int i = 0; str[i]; i++){
        if(str[i] == chr){
            return true;
        }
    }
    return false;
}

bool strstr2(char* str1, char* str2){ /// is str2 is in str1
    bool flag = false;
    for(int i = 0; str1[i]; i++){
        int j;
        for(j = 0; str2[j] && !flag && str1[i+j]; j++){
            if(str1[i+j] != str2[j]){
                flag = true;
                j--;
            }
        }
        cout<<"j = "<<j<<endl;
        if (j == strlen2(str2)){
            return true;
        }
        flag = false;
    }
    return false;
}

int main(){
    char str1[100] = "Zdraveite priateli!";
    char str2[100] = "Zdraveite drugari!";
    cout<<strlen2(str1)<<endl;
    cout<<strcmp2(str1, str2)<<endl;
    cout<<strcat2(str1, str2)<<endl;
//    for(int i = 0; result[i]; i++){
//        cout<<setw(3)<<result[i];
//        cout<<setw(3)<<(int)result[i];
//    }

    cout<<strchr2(str1, 'b')<<endl;
    cout<<strchr2(str1, 'p')<<endl;
    char str3[100] = "eite pria1";
    cout<<strstr2(str1, str3);

}
