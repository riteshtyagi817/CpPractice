/* members in a member intializer list are always intialised in the order in which 
they are defined in the class not in the order they are defined in the member initializer list */
#include<iostream>

using namespace std;
class Foo{

	private:
	int m_x {};
	int m_y {};
	public:
	Foo(int x, int y): m_y{ max(x,y)} , m_x{m_y}// member initializer list
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
