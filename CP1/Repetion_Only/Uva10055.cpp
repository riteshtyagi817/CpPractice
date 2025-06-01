/* Date: Sun Jun  1 06:28:22 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
void solve(){

	int a , b;
	int ans = 0;
	
	while(cin >> a >> b){
		ans =  abs(b-a);
		cout << ans << endl;

	} 
	return ;

}

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}

