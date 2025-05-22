#include<iostream>
using namespace std;
namespace Foo{


	void printHi(){ cout << "Hi\n" << endl;}

}
int main(){

	Foo::printHi();

	
	return 0;

}
