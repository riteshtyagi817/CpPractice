#include<iostream>
#include<string>
#include<string_view>
using namespace std;
class Employee{

	string m_name{};
	char m_firstInitial{};
	public:
	void setName(std::string_view name){ // both string and string_view works

		m_name = name;
		m_firstInitial = name.front(); // use std::string::front() to get first 
		// letter of the name

	}
	void print() const{

		cout << "Employee " << m_name << " has first initial " << m_firstInitial << '\n';
	}

};
int main(){


	Employee e{};
	e.setName("Ritesh");
	e.print();


	e.setName("Tyagi");
	e.print();

	return 0;

}

