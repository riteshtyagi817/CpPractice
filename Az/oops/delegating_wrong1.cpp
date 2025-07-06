#include<iostream>
using namespace std;
struct Foo{

	int x{};
	int y{};
	public:
	Foo(){
		x = 5;

	}
	Foo(int val): y{val}
	{
		// intent is to call Foo() function
		// actual L value initialises nameless temporary foo which is then 
		// discarded

		Foo(); // this is the equivalent of writing Foo{};
	}


};
int main(){

	Foo f{9};
	cout << f.x << " " << f.y << endl;
	// will print 0 and 9
	return 0;
}
