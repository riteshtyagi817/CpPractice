#include<iostream>
using namespace std;
class Date{

	int year{};
	int month{};
	int day{};

	void print() const{
		cout << year << "/" << month << "/" << day << endl;

	}


};
int main(){


	Date today {2020,10,14}; // will give compiler error
	today.day = 16; // will give compiler error
	today.print(); // will give compiler error



	return 0;
}
