#include<bits/stdc++.h>
using namespace std;
#define int long long
int mod = 1e9+7;
int binPow(int a, int b){

	if(b == 0) return 1;
	if(b%2 == 1) return (a*binPow(a,b-1))%mod;
	else{
		int x = binPow(a,b/2);
		return (x*x)%mod;
	}

}
int inverse(int x){

	return binPow(x, mod-2);

}
signed main(){
	int num = 1, den = 1;
	int n,r;
	cin >> n >> r;
	for(int i = 1; i <=r;++i){

		num = (num*(n-i+1))%mod;
		den =(den*i)%mod;

	}
	cout <<  ((num)*inverse(den))%mod << endl;


	return 0;
}
