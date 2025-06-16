/* Date: Sat Jun 14 14:58:06 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	int x , y;
	cin >> x >> y;
	if(x < y) cout << "<" << endl;
	else if( x > y) cout << ">" << endl;
	else cout << "=" << endl;
	return;

}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tt;
	cin >> tt;
	while(tt--)solve();
	return 0;
}

