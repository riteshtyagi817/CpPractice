/* Date: Wed Aug  6 09:04:58 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	string a, b;
	cin >> a >> b;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	if(stoi(a) > stoi(b)){

		cout << a << endl;
	}else cout << b << endl;
	return ;

}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}

