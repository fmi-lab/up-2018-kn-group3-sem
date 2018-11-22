#include<iostream>
using namespace std;

int main(){
	char string[50] = "Hello world!\nHello again\n";
	int countSmallLetters = 0;
	for(int i = 0; string[i]; i++){
		if(string[i]>='a' && string[i] <='z'){
			countSmallLetters++;
		}
	}
	cout<<countSmallLetters<<endl;
	return 0;
}