#include <iostream>

using namespace std;

int sum(int x=10,int y=2){
	return x+y;
}

int main(){
	cout<<sum(1,2)<<endl;
	cout<<sum(1)<<endl;
	//cout<<sum(,2)<<endl;
	cout<<sum()<<endl;
	return 0;
}
