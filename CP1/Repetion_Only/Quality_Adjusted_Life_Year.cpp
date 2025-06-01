/* Date: Sun Jun  1 06:15:12 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	int n;
	cin >> n;
	double a, b;
	double sum  = 0;
	for(int i = 0; i  < n;i++){
	
		cin >> a >> b;
		sum += (a*b);

	}
	cout << fixed << setprecision(3) << sum << endl;
	return;

}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}

