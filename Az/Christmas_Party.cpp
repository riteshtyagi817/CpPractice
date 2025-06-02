/* Date: Sun Jun  1 19:28:05 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int mod = 1e9+7;
long long der[1000001];
void compute(int n){

	der[1] = 0;
	der[2] = 1;
	for(int i = 3; i <= n;i++){
		der[i] = ((i-1)*(der[i-1] + der[i-2]))%mod;
	}

}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n;
	cin >> n;
	compute(n);
	cout << der[n]  << endl;

	return 0;
}

