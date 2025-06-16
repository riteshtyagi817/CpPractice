#include<iostream>
using namespace std;
class Foo{
	public:
	Foo(int x, int y){
		
	}

};
int main(){

	Foo foo{'a',true}; // will match int, int constructor due to implicit conversion

	return 0;
}
