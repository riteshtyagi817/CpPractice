/* Date: Fri Apr 25 06:12:43 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long  n;
	cin >> n;
	while(n != 1){
		
		cout << n << " ";
		if(n%2 != 0){
			n = 3*n + 1;
		}
		else{
			n /= 2;
		}


	}
	cout << 1 << endl;
	return 0;
}

