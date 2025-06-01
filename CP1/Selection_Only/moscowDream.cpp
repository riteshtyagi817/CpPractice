/* Date: Sun Jun  1 06:56:48 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){

	int a, b, c, n;
	while(cin >> a >> b >> c >> n){
		if( a >= 1 and b >= 1 and c >= 1 and (a+b+c) >= n and (n >= 3)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return;


}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}

