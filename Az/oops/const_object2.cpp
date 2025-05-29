#include<iostream>
using namespace std;
class Date{

	public:
	int year {};
	int month {};
	int day {};
	void print(){
		cout << year << "/" << month << "/" << day << endl;

	}

};

int main(){
	

	const Date today {2020, 10,14}; // const class type object	
	today.print(); // const object can't call non const member function




	return 0;
}
