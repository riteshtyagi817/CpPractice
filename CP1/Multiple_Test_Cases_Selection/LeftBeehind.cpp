/* Date: Sat Jun 28 11:09:45 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){
	int a, b;
	while(cin >> a >> b){
	
		if( a == 0 and b == 0) break;
		if(a + b == 13) cout << "Never speak again." << endl;
		else if(a > b) cout << "To the convention." << endl;
		else if(b > a) cout << "Left beehind." << endl;
		else if( a == b) cout << "Undecided." << endl;

	}
	return;

}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}

