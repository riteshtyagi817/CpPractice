#include<bits/stdc++.h>
using namespace std;
void g(int n){

	if(n == 0) return;
	cout << n << endl;
	g(n-1);
	return;

}
void h(int n){

	if(n == 1) return;
	h(n-1);
	cout << n << endl;
	return;

}
void print1toN(int n){


	g(n); // will print n to 1 
	h(n); // will print 2 to n


	return;

}
int main(){

	int n;
	cin >> n;
	print1toN(n);
	return 0;

}
