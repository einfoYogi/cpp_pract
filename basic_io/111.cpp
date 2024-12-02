#include <iostream>
#include <string>

using namespace std;

int main(){
	string name;
	int i;
	cin>>i;
	//getline(cin,name,'\n');
	cin.ignore();
	getline(cin,name,'\n');
	cout<<name<<endl<<i<<endl;
	return 0;
}
