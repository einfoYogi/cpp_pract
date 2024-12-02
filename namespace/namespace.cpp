#include <iostream>
#include "namespace_lib.h"

using namespace std;

int main(){
	cout<<employee1::calculate(2,3)<<endl;
	cout<<employee2::calculate(2,3)<<endl;
	return 0;
}
