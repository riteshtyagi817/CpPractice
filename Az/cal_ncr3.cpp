#include<bits/stdc++.h>
using namespace std;
#define int long long
int mod = 1e9+7;
int basic_ncr(int n, int r){

	int ans = 1;
	for(int i = 1; i <= r;i++){

		ans = ans*(n-i+1);
		ans = ans/i;
	}
	return ans;

	
}
signed main(){

	int n, r;
	cin >> n >> r;
	cout << basic_ncr(n,r) << endl;


	return 0;
}
