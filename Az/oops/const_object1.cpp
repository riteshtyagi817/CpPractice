#include<iostream>
using namespace std;
class Date{

	public:
	int year {};
	int month {};
	int day {};
	void incrementDay(){
		++day;
	}

};

int main(){
	

	const Date today {2020, 10,14}; // const class type object
	today.day += 1; // compile error, can't modify the member
	today.incrementDay(); // can't modify the member of const object

	return 0;
}
