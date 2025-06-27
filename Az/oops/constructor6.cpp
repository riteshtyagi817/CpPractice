#include<iostream>
using namespace std;
class Foo{

	public:
	Foo(){
		cout << "Default constructor\n";
	}

};

int main(){

	Foo foo{}; // no initlialization values, call Foo's default;
	Foo foo2;

	return 0;
}
