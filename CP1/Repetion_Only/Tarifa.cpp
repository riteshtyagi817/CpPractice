/* Date: Sun Jun  1 06:24:08 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	int p;
	int n;
	cin >> p >> n;
	int ans = p;
	int val;
	while(n--){

		cin >> val;
		ans += (p - val);
	}
	cout << ans << endl;
	return;

}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}

