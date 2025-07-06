#include<iostream>
using namespace std;
class Employee{

	private:
	string m_name{};
	int m_id  {0};
	public:
	Employee(string name):m_name{name}
	{
		cout << "Employee " << m_name << "created  " << endl;
	}
	Employee(string name, int id):m_name{name}, m_id{id}{
		Employee(name); 
	}



};
int main(){


	Employee e1{"James"};
	Employee e2 { "Dave", 42};
	return 0;

}
