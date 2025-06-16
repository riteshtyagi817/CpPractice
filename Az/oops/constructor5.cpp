/*

Member initializer list vs default member initializers
If a member is listed in the member initializer list, that initialization value is used
Otherwise, if the member has a default member initializer, that initialization value is used
Otherwise, the member is default initialised.
This means that if a member has both a default member initializer and is listed in the member initializer list for the constructor, the member initializer list value takes precedence.

*/
#include<iostream>
using namespace std;
class Foo{

	private:
	int m_x{}; // default member initializer will be ignored.
	int m_y{2}; // default member intializer will be used.
	int m_z ; // no initializer
	public:
	Foo(int x):m_x{x}{
		cout << "Foo constructed\n";

	}
	void print() const {
		cout << m_x << " " << m_y << " " << m_z << endl;
	}
	


};
int main(){

	Foo foo{6};
	foo.print();

	return 0;

}
