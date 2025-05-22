#include<iostream>
#include<string>
using namespace std;
class Date{

	public:
	int m_day{};
	int m_month{};
	double m_year{};
};
void printDate(const Date &date){


	cout << date.m_day <<  " " << date.m_month << " " << date.m_year << endl;
	return;
}
int x{};
int main(){

	Date date{3,4,2025};
	printDate(date);


	return 0;
}
