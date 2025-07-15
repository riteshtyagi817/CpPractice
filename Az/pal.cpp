#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
bool isPal(int l, int r, string &in){
	if(l >=r) return true;
	return (in[l] == in[r]) and isPal(l+1,r-1, in);


}
int main(){

	string in;
	cin >> in;
	int l = 0;
	int r = in.length()-1;
	if(isPal(l,r,in)){
	
		cout << in << " is a palindrome. " << endl;
	}else cout << in << " is not a palindrome. " << endl;

	return 0;

}
