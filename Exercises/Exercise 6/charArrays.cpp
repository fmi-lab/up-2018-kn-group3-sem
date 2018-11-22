#include<iostream>
using namespace std;

int main(){
	char string[50] = "Hello \0world!";
	//cout<<string;
	for (int i = 0; i<50; i++){
		cout<<string[i];
	}
}