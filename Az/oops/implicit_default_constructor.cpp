#include<iostream>
using namespace std;
class User{

	private:
	int m_a;  //  note : no default constructor value
	int m_b{};
	public:
	User(){}  // user provided empty constructor
	int a() const { return m_a;}
	int b() const { return m_b;}

};
class Default{

	int m_a;
	int m_b{};
	public:
	Default() = default; /// explicitly defaulted default constructor
	int a() const { return m_a;}
	int b() const { return m_b;}


};
class Implicit{
	int m_a;
	int m_b{};
	public:
	int a() const { return m_a;}
	int b() const { return m_b;}

};
int main(){

	User user{};
	cout << user.a() << " " << user.b() << endl;
	Default def{} ;
	cout << def.a() << " " << def.b() << endl;
	Implicit imp{};
	cout << imp.a() << " " << imp.b() << endl;
	return 0;

}
