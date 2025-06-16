/* Date: Sat Jun 14 14:49:17 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	
	int x;
	cin >> x;
	if(x % 2  == 0) cout << x << " is even" << endl;
	else cout << x << " is odd" << endl;
	return;

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

