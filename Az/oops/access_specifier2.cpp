#include<iostream>
using namespace std;
class Date{

	private:
	int year{2020};
	int month{10};
	int day{14};

	public:
	void print() const{
		cout << year << "/" << month << "/" << day << endl;

	}


};
int main(){


	Date today {}; // will work fine
	today.print(); // will work fine



	return 0;
}
