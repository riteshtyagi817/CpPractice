/* Date: Sat Jun 14 18:19:20 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int mod = 1e9+7;
void solve()
{
	int n;
	cin >> n;
	int out = 0;
	if( n <= 1) {
		cout << n << endl;
		return;
	}
	int a = 0;
	int b = 1;
	for(int i = 2; i <= n;i++){
		out = (a+b)%mod;
		a = b;
		b = out;

	}
	cout << out << endl;
	return;


}
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}

