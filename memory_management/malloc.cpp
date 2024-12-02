#include <iostream>

using namespace std;

int main(){
	int *int_ptr= (int*)malloc(10*sizeof (int) );
	for(int i=0; i<10; i++){
		int_ptr[i]=i;
	}
	for(int i=0; i<10;i++){
		cout<<"element: "<<i<<endl;
	}
	return 0;
}
