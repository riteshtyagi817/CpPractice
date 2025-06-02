#include<iostream>
#include<string>
using namespace std;
// access levels are per class not per object, a member function can also directly 
// access the private members of ANY other object of the same class type that is in scope.
class Person{

	private:
	string m_name{};
	public:
	void kisses(const Person &p) const{

		cout << m_name << " kisses " << p.m_name << endl;

	}
	void setName(string name){
		m_name = name;
	}

};


int main(){

	Person joe;
	joe.setName("Joe");
	Person kate;
	kate.setName("kate");
	joe.kisses(kate);
	return 0;

}

