#include<iostream>
using namespace std;
struct Date{

	int year{};
	int month{};
	int day{};

	void print() const{
		cout << year << "/" << month << "/" << day << endl;

	}


};
int main(){


	Date today {2020,10,14};
	today.day = 16;
	today.print();



	return 0;
}
