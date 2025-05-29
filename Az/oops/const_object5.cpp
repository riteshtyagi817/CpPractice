#include<iostream>
using namespace std;
class Date{

	public:
	int year {};
	int month {};
	int day {};
	void print()  { // const will ensure it will not modify any data member and 
	// also it will not call any const member function that may modify the data
		cout << year << "/" << month << "/" << day << endl;
		

	}


};
void doSomething(const Date &date){

	date.print(); // const object calling non const member function

	
}


int main(){
	

	Date today {2020, 10,14}; // const class type object	
	today.print(); // it will work now , non const can call const member function
	doSomething(today); // this will throw error


	return 0;
}
