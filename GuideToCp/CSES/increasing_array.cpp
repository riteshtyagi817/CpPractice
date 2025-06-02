/* Date: Sun Jun  1 08:38:40 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
void solve(){

	int n;
	cin >> n;
	int count = 0;
	int prev = 0;
	int val ;
	cin >> val;
	prev = val;
	n--;
	while(n--){

		cin >> val;
		cout << val << endl;
		if(val < prev) count += (prev-val);
		prev = val;

	}
	cout << count << endl;
	return;


}
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}

