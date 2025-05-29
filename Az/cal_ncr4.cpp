/*
for  n   <= 1000 and if mod is not prime , then we can't calculate inverse
and below approach will work
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long
int mod = 1e9;
int ncr[1001][1001];
int ncr_random_modulo(int n, int r){

	ncr[0][0]  = 1;
	for(int i = 1; i < n;i++){

		for(int j = 0; j <= i;j++){
			if(j == 0) ncr[i][j] = (ncr[i-1][j])%mod;
			else ncr[i][j] = (ncr[i-1][j-1] + ncr[i-1][j])%mod;

		}
	}
	return ncr[n-1][r-1];

}
signed  main(){

	int n, r;
	cin >> n >> r;
	cout << ncr_random_modulo(n, r) << endl;

	return 0; 
}
