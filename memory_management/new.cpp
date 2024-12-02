#include <iostream>

using namespace std;

int main(){
	int *int_ptr= new int[10] ;
	for(int i=0; i<10; i++){
		int_ptr[i]=i;
	}
	for(int i=0; i<10;i++){
		cout<<"element: "<<i<<endl;
	}
	delete[] int_ptr;
	return 0;
}
