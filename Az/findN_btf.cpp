#include<bits/stdc++.h>
using namespace std;
int main(){


	string s = "0123456789";
	do{
		int num1 = stoi(s.substr(0,5));
		int num2 = stoi(s.substr(5,5));
		
		if(num1%num2 == 0 and ((num1 /num2) == 62))
			cout << num1 << " " << num2 << endl;
		


	}while(next_permutation(s.begin(), s.end()));
	return 0;

}
