#include<iostream>
using namespace std;
class Date{

	private:
	int m_year{2020};
	public:
	void setYear(int year){ m_year = year;}
	int  getYear() const { return m_year;}


};
int main(){


	Date d;
	cout << d.getYear() << endl;
	d.setYear(1920);
	cout << d.getYear() << endl;
	return 0;
}
