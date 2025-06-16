#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cout << "Enter the no to convert it into bit wise representation: ";
	cin >> x;
	for(int k = 31; k >= 0;k--){
		if(x&(1 << k)) cout << "1";
		else cout << "0";

	}

	return 0;

}
