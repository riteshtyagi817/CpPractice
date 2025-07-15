#include<bits/stdc++.h>
using namespace std;
void print1toN(int n){


	if(n == 0) return ;
	cout << n << endl;
	print1toN(n-1);
	if(n >= 2)
	cout << n << endl;

	return;

}
int main(){


	int n;
	cin >> n;
	print1toN(n);


	return 0;

}
