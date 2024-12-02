#include <iostream>

using namespace std;

void Print(const int &ref){
	cout<<"PRINT:"<<ref<<endl;
}

void Print_l(float x){
	cout<<"Print:"<<x<<endl;
	x=10;
	
}

int main(){
	const int PI=3.14;
	cout<<"AREA :"<<PI*2.2*2.2<<endl;
	/*
	PI+=2;
	ERROR:
		const.cpp: In function ‘int main()’:
		const.cpp:8:4: error: assignment of read-only variable ‘PI’
    		8 |  PI+=2;
     		  |  ~~^~~
	*/
	const int &ref=PI; //const variable only can be referenced by const reference
	Print(ref);
	Print_l(PI);
	cout<<PI<<endl;
	return 0;
}
