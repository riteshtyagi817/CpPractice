#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int mod = 1e9 + 7;
long long der[1000001];
void compute_der(int n){

	der[1] = 0;
	der[2] = 1;
	for(int i = 3; i <= n;i++){

		der[i] = ((i-1)*(der[i-1] + der[i-2]))%mod;
	}
	return;
	


}
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	int n;
	cin >> n;
	compute_der(n);
	cout << der[n] << endl;
	return 0;


}
