#include <iostream>

using namespace std;

void Print(int x){
	cout<<"Print:"<<x<<endl;
}
void Print_n_add(int &x){
	cout <<"Print and add:"<<x<<endl;
	x+=x;
}

int main(){
	int x=10;
	int &ref=x; //ref
	cout<<"main"<<ref<<endl;
	Print(x);
	Print_n_add(x);
	Print(x);
	return 0;
}
