/* Date: Sun Aug  3 01:19:01 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int g(int n){

	if(n < 10) return n;
	else return n%10 + g(n/10);
}
int sumD(int n){

	int res = 0;
	res = n;
	do{
		res = g(res);

	}while(res >= 10);
	return res;
}
void solve(){


	int n;
	int res = 0;
	while(cin >> n){
	
		if(0 == n) break;
		res = sumD(n);
		cout << res << endl;



	}

	return;
}
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}

