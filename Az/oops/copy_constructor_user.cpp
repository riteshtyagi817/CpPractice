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
void printFraction(Fraction f){

	// f is passed by value
	f.print();
}
Fraction generateFraction(int n, int d){

	Fraction f{n,d};
	return f;


}
int main(){


	Fraction f{5,3};
	printFraction(f);
	Fraction f2{generateFraction(1,2)}; //Fraction is returned using copy constructor
	printFraction(f2);
	return 0;
}
