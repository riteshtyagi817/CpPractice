#include<iostream>
using namespace std;
class Foo{

	private:
	int m_value{4}; // private member
	public:
	auto & value () { return m_value;}  // returns a non const reference , don't do this

};
int main(){


	Foo f{}; // f.m_value is initialized to default
	f.value() = 5; // the equivalent of m_value is 5
	cout << f.value() << endl;

	return 0;
}
/*
because value() return a non const reference to m_value ,the caller is able to use that
reference to directy access ( change the value of ) m_value.
this allows the caller to subvert the access control system


*/

