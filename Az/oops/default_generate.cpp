#include<iostream>
using namespace std;
class Foo{

	private:
	int m_x{};
	int m_y{};
	// no constructor declared 
	public:
	Foo() = default;

};
int main(){

	Foo foo{};

	



	return 0;
}
