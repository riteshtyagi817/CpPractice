/* Date: Sun May 25 07:25:51 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	int n;
	cin >> n;
	long long ans =  abs(((((((n*567)/9)+7492)*235)/47)-498)/10);
	if(ans < 0) ans = -ans;
	cout << ans%10 << endl;
	return;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		solve();

	}
	
	return 0;
}

