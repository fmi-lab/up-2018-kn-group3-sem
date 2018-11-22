#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int N;
	cin>>N;
	double x,y;
	double maxX, minX, maxY, minY;
	for(int i = 0; i<N; i++){	
		cin>>x>>y;
		if(i==0){
			maxX = minX = x;
			maxY = minY = y;
		} if(x>maxX){
			maxX = x;
		} if(x<minX){
			minX = x;
		} if(y<maxY){
			maxY = y;
		} if(y<minY){
			minY = y;
		}
	}

	cout<<pow(max(abs(maxX - minX), abs(maxY - minY)), 2);
}