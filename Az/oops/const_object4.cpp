#include<iostream>
using namespace std;
class Date{

	public:
	int year {};
	int month {};
	int day {};
	void print() const { // const will ensure it will not modify any data member and 
	// also it will not call any const member function that may modify the data
		cout << year << "/" << month << "/" << day << endl;
		++day; // will throw error

	}

};

int main(){
	

	const Date today {2020, 10,14}; // const class type object	
	today.print(); // it will work now




	return 0;
}
