/* To make one constructor delegate intialization to another constructor 
simply call the constructor in the member initializer list */
#include<iostream>
#include<string>
using namespace std;
class Employee{

	private:
	string m_name{};
	int m_id { 0};
	public:
	Employee(string name):Employee{name, 0}
	{
		cout << "Employee constructor 1 called. " << endl;

	}
	Employee(string name, int id):m_name{name}, m_id{id}{
		cout << "Employee constructor 2 called. " << endl;

	}



};
int main(){


	Employee e1{"James"};
	Employee e2{"Dave",42};

	return 0;

}
