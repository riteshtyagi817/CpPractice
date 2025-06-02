#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
long long dearrangement(int n){

	if(n == 1) return 0;
	if(n == 2) return 1;
	return (n-1) *(dearrangement(n-1) + dearrangement(n-2));
	


}
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	int n;
	cin >> n;
	cout << dearrangement(n) << endl;
	return 0;


}
