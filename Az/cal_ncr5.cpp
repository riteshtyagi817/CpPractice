#include<bits/stdc++.h>
using namespace std;
#define int long long
int mod  = 1e9+7;

int binPow(int a, int b){

	if(b == 0) return 1;
	if(b%2 == 1) return (a*binPow(a,b-1))%mod;
	else{
		int x = binPow(a,b/2)%mod;
		return (x*x)%mod;

	}
	
}
int inverse(int x) // log(mod)
{
	return binPow(x,mod-2);

}
int fact[1000100];
int precompute(){

	fact[0] = 1;
	for(int i = 1; i <= 1000000;i++){

		fact[i] = (fact[i-1] *i)%mod;

	}
	return 0;


}
int ncr_fact(int n, int r){


	int num = fact[n];
	int den = (fact[n-r] *fact[r])%mod;
	return (num * inverse(den))%mod;

}
signed main(){

	precompute();
	int q;
	cin >> q;
	while(q--){

		int n, r;
		cin >> n >> r;
		cout <<  ncr_fact(n, r) << endl;

	}

	return 0;

}





