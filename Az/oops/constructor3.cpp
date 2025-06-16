#include<iostream>
using namespace std;
class Foo{

	private:
	int m_x {};
	int m_y {};
	public:
	Foo(int x, int y): m_x{x},m_y{y} // member initializer list
	{
		cout << "Foo(" << x << " " << y << ")" << "construcuted\n";
	}
	void print() const{
		cout << m_x << " " << m_y << endl;
	}

};
int main(){

	Foo foo{6,7};
	foo.print();

	return 0;
}
