/* Date: Fri Jul 25 07:21:05 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	int n  = 0;
	int ele = 0;
	int min_ele = INT_MAX;
	int min_idx = -1;
	cin >> n;
	int i =0;
	while(n--){
		cin >> ele;
		if(ele < min_ele){
			min_ele = ele;
			min_idx = i;
		}
		i++;
	}
	cout << min_idx << endl;
	return;


}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}

