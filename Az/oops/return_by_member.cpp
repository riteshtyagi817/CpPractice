#include<iostream>
#include<string>
using namespace std;
class Employee{
	string m_name{};
	public:
	void setName(string name) { m_name = name;}
	const string & getName() const { return m_name;}

};

int main(){

	Employee joe{}; // joe exists until the end of the function
	joe.setName("Joe");

	cout << joe.getName() << endl; // returns joe_name by reference 
	string name = joe.getName(); // returns joe_name by reference 
	cout << name << endl;


	return 0;
}
