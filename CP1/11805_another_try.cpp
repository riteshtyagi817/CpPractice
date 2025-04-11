/* Date: Fri Apr 11 05:09:14 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int TT;
	cin >> TT;
	int n,k,p;
	int out;
	int count = 1;
	while(TT--){
		
		cin >> n >> k >> p;
		if((k+p)%n > 0) out = (k+p)%n;
		else out = n;
		cout << "Case " <<count++ << ":" << " " <<  out << endl;
		

	}
	return 0;
}

