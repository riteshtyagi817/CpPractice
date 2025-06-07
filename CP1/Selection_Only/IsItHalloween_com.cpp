/* Date: Sat Jun  7 12:02:40 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	string month;
	int day;
	while(cin >> month >> day){

		if((month == "OCT" and day == 31) or (month == "DEC" and day == 25)){
			cout << "yup" << endl;
		}else cout << "nope" << endl;
	}

	return;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}

