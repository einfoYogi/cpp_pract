#include<iostream>
#include<thread>
#include<list>
#include<string>
#include<mutex>

using namespace std;

list<int> d_data;
const int SIZE{10000};

void f_download(){
	for(int i=0;i<SIZE;i++){
		d_data.push_back(i);
	}
}

int main(){
	thread mydownload (f_download);
	thread mydownload2(f_download);
	mydownload.join();
	mydownload2.join();
	cout<<d_data.size()<<endl;
	return 0;
}

