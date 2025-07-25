/* Date: Tue Jul 22 11:16:46 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	int tt;
	cin >> tt;
	int idx = 0;
	int ele = 0;
	int result = INT_MIN;
	while(tt--){
		result = INT_MIN;
		idx++;
		int n;
		cin >> n;
		while(n--){
			cin >> ele;
			result = max(ele, result);
		}
		cout << "Case " << idx << ": " << result << endl;

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

