#include<iostream>
#include<string>
using namespace std;
class Date{

	public:
	int day{};
	int month{};
	double year{};
	void printDate(){

		cout << day << "/" << month << "/" << year << endl;
		return;

	}
};

int main(){


	Date date{3,4,2025};
	date.month = 6;
	date.printDate();
	return 0;
}
