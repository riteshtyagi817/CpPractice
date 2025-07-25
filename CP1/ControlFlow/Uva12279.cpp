/* Date: Fri Jul 25 07:03:27 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve(){

	int n;
	int idx = 0;
	int count_pos = 0;
	int count_zero = 0;
	int ele = 0;
	while(cin >> n){
		count_pos = 0;
		count_zero = 0;
		idx++;
		if(n == 0) break;
		while(n--){
			cin >> ele;
			if(ele > 0)count_pos++;
			else if(ele == 0) count_zero++;
		}
		cout << "Case " << idx << ": " << (count_pos - count_zero) << endl;

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

