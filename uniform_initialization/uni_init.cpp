#include <iostream>
#include <string>

using namespace std;

int main(){
	// uninitialized built-in type
	int i;
	// initialized built-in type
	int j=10;
	// initialized built-in type
	int k(10);
	// Aggregate initialization
	int a[]={1, 2, 3, 4};
	//If initialized using brace initialization, the above code can be re-written as:
	int ii{};     // initialized built-in type, equals to int i{0};
	int ij{10}; // initialized built-in type
	int ia[]{1, 2, 3, 4}; // Aggregate initialization
	string name{"Yogi"};
}
