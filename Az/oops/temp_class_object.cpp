#include<iostream>
using namespace std;
class IntPair{

	private:
	int m_x{};
	int m_y{};
	public:
	IntPair(int x, int y):m_x{x},m_y{y}{}
	int x() const { return m_x;}
	int y() const { return m_y;}


};
void print(IntPair p){
	cout << "(" << p.x() << "," << p.y() << ")\n";
}
int main(){

	// case 1 pass variable
	IntPair p{ 3,4};
	print(p);
	// case 2 construct temporary intpair and pass to the function
	print(IntPair{5,6});
	// case 3 implicitly convert {7,8} to a temporary intpair and pass to the function
	print({7,8});
	return 0;

}
