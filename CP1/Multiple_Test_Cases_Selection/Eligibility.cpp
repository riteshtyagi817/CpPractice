/* Date: Sat Jun 28 09:07:24 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){

	string name;
	int yy;
	char c1;
	int mm;
	char c2;
	int dd;

	int y;
	char c3;
	int m;
	char c4;
	int d;
	int courses;
	cin  >> name >> yy >> c1 >> mm >> c2 >> dd >> y >> c3 >> m >> c4 >> d >> courses;

	if(yy >= 2010)cout << name << " eligible" << endl;
	else  if(y >= 1991) cout << name << " eligible" << endl;
	else if(courses >= 41)cout << name << " ineligible" << endl;
	else cout << name << " coach petitions" << endl;
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

