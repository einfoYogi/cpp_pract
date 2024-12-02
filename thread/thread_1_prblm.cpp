#include <iostream>
#include <thread>

using namespace std;

void mytest(int x){
	cout<<"Hello from mytest"<<endl;
	cout<<x<<" is passed as argument"<<endl;;
}

int main(){
	thread mythread(mytest,100);
	cout<<"hello from main"<<endl;
//	mythread.join();
	return 0;
}
