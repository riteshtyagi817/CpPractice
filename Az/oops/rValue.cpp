/* Rvlaue objects are destroyed at the end of the full expression in which they are created
when an rvalue object is destroyed , any references to members of that rvalue will be 
invalidated and left dangling, and use of such references will produce undefined behavior
*/
#include<iostream>
#include<string>
using namespace std;
class Employee{

	string m_name{};
	public:
	void setName(string name){ m_name = name;}
	const auto &getName() const { return m_name;}


};
Employee createEmployee(string name){

	Employee e;
	e.setName(name);
	return e;
}
int main(){

	// case 1 ok: use returned member reference to member of rvalue object class in 
	// in same expression
	cout << createEmployee("Frank").getName() << endl;

	// case 2 bad: save returned reference to member of rvalue object for use later
	const string & ref { createEmployee("Garbo").getName() };
	// reference becomes dangling when return value of createEmployee() is destroyed
	cout << ref << endl; // undefined behavior

	// case 3 ok:
	string val { createEmployee("Hans").getName() }; // makes copy of referenced member
	cout << val << endl; // val is independent of referenced member

	return 0;
}



