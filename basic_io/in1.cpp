#include <iostream>
#include <string>

using namespace std;

int main(){
	string name;
	int int_num;
	float float_num;
	char char_n;
	cout<<"Enter int value: ";
	cin>>int_num;
	cout<<"Enter float value: ";
	cin>>float_num;
	cout<<"Enter char: ";
	cin>>char_n;
	cout<<"Enter your name: ";
	//getline(cin,name);
	cin.ignore();
	getline(cin, name,'\n');
	cout<<name<<endl
	    <<int_num<<endl
	    <<float_num<<endl
	    <<char_n<<endl;
}
