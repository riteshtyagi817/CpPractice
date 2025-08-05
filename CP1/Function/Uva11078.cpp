/* Date: Sun Aug  3 01:07:20 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	int res = INT_MIN;
	int max_val = INT_MIN;
	int n;
	cin >> n;
	int ele = 0;
	int idx = 0;
	while(n--){

		cin >> ele;
		if(idx == 0) max_val = max(max_val,ele);
		else{
			if(max_val - ele > res) res = max_val -ele;
			max_val = max(max_val,ele);

		}
		idx++;
	}
	cout << res << endl;

}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int tt;
	cin >> tt;
	while(tt--)solve();
	return 0;
}

