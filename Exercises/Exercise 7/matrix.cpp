#include <iostream>
#include<iomanip>
using namespace std;


int main(){
    int matrix[4][6] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
    for(int i = 0; i<4; i++){
        for(int j = 0; j<6; j++){
            cout<<setw(3)<<matrix[i][j];
        }
        cout<<endl;
    }
    return 0;
}
