#include<iostream>
using namespace std;
class Foo{

	private:
	int m_x{};
	int m_y{};
	public:
	Foo(int x = 0, int y = 0): m_x{x}, m_y{y}{
		cout << "Foo(" << m_x << "," << m_y << ")constructed\n";


	}


};
int main(){


	Foo foo1{}; // calls Foo(int , int) constructor using default
	Foo foo2{6,7}; // calls foo(int, int) constructor 

	return 0;
}
