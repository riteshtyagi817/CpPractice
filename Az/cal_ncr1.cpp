#include<bits/stdc++.h>
using namespace std;
#define int long long
int mod = 1e9+7;
int binPow(int a, int b){

	if(b == 0) return 1;
	if(b%2 == 1){

		return ((a%mod) *(binPow(a, b-1)%mod))%mod;
	}
	else{
		int x = binPow(a,b/2);
		return ((x%mod) *(x%mod))%mod;
	}
	return 1;

}
int inverse(int x){

	return binPow(x,mod-2);
}
int fact(int x){

	if(x == 0) return 1;
	int ans  = 1;
	for(int i = 2; i<= x;++i){

		ans = (ans*i)%mod;	
	}
	return ans;

}
int ncr(int n, int r){

	int num = fact(n);
	//cout << num << endl;
	int den = (fact(r)*fact(n-r))%mod;
	//cout << den << endl;
	//cout << inverse(den)%mod << endl;
	return (num*inverse(den))%mod;
}



signed main(){

	int n;
	int r;
	cin >> n >> r;
	cout << "the value of ncr is " << ncr(n,r) << endl;
	return 0;

}
