#include<iostream>
#include<string>
using namespace std;
const string & alphabetical(const string &a, const string &b){

	return (a < b)?a:b;

}
int main(){

	string hello{"Hello"};
	string world{"World"};

	cout << alphabetical(hello, world) << endl;

	return 0;
}
