#include<iostream>
using namespace std;
class Something{

	public:
	void print(){
		cout << "non const " << endl;
	}
	void print() const{
		cout << " const " << endl;
	}


};
int main(){

	Something s1{};
	const Something s2{};
	s1.print(); // will call non const 
	s2.print(); // will call const 


	return 0;
}
