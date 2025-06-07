/* Date: Sat Jun  7 12:10:49 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	int l, r;
	while(cin >> l >> r){
		if(l == r and l != 0){
			cout << "Even " << 2*l << endl;

		}else if(l != r){
			cout << "Odd " << 2*max(l,r) << endl;

		}else {
			cout << "Not a moose" << endl;

		}

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

