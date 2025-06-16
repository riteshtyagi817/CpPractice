/* Date: Sat Jun 14 15:58:18 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	static int count = 0;
	int l, w, h;
	cin >> l >> w >> h;
	count++;
	if(l <= 20 and w <= 20 and h <= 20)
		cout << "Case " << count << ": " << "good" << endl;
	else cout << "Case " << count << ": " << "bad" << endl;
	return;

}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tt;
	cin >> tt;
	while(tt--) solve();
	return 0;
}

