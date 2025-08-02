#include<iostream>
using namespace std;
class Fraction{

	private:
	int m_numerator{0};
	int m_denominator{1};
	public:
	Fraction(int num = 0, int deno = 1):m_numerator{num}, m_denominator{deno}{
		
		
	}
	Fraction(const Fraction &fraction):m_numerator{fraction.m_numerator}, m_denominator{fraction.m_denominator}{

		cout << " copy constructor called " << endl;


	}
	void print(){

		std::cout << "Fraction(" << m_numerator << ", " << m_denominator << " )" << endl;

	}


};
int main(){

	Fraction f{5,3};
	Fraction fcopy{f};

	f.print();
	fcopy.print();

}
