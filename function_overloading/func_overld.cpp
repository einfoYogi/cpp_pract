#include <iostream>

using namespace std;

int sum(int x,int y){
	return x+y;
}
float sum(float x,float y){
	return x+y;
}
char sum(char x,char y){
	return x+y;
}

int main(){
	cout<<sum(4,2)<<endl;
	cout<<sum(4.2f,2.6f)<<endl;
	//cout<<sum('a','b')<<endl;
	return 0;
}
