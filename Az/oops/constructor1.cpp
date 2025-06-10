#include<iostream>
using namespace std;
class Foo{

	private:
	int m_x{};
	int m_y{};
	public:
	Foo(int x, int y){
		// here is our constructor that takes two initializers 
		cout << "Foo(" << x << ", " << y << ") constructed\n";

	}
	void print() const{
		cout << "Fool(" << m_x << ", " << m_y << ")\n";

	}


};
int main(){

	Foo foo{6,7};
	foo.print();
	return 0;

}
