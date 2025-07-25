/* Date: Mon Jul 21 09:58:11 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	int idx = 0;
	int n;
	int ele;
	int min_ele = INT_MAX;
	int max_ele = INT_MIN;
	int rg = 0;
	n = 0;
	while(cin >> n){
		idx++;
		while(n--){

			cin >> ele;
			min_ele = min(ele, min_ele);
			max_ele = max(ele, max_ele);
			rg = max_ele  - min_ele;

		}
		cout << "Case " << idx << ": " <<  min_ele << " " << max_ele << " " << rg << endl;
		min_ele = INT_MAX;
		max_ele = INT_MIN;
		rg = 0;
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

