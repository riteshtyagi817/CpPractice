/* Date: Sat Jun  7 13:22:32 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	int x, y;
	while(cin >> x >> y){

		if(x > 0 and y > 0) cout << 1 << endl;
		else if(x > 0 and y < 0) cout << 4  << endl;
		else if(x < 0 and y > 0) cout << 2 << endl;
		else cout << 3 << endl;

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

