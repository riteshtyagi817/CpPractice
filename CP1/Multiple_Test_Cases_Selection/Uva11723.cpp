/* Date: Sun Jul 20 00:19:30 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
void solve(){

	int r,n;
	int idx = 0;
	while(1){

		cin >> r >> n;
		idx++;
		if(r  == 0 and n == 0) break;
		if(r > n*26){
			cout << "Case " << idx << ": " << "impossible" << endl;

		}else{
			cout << "Case " << idx << ": " << ((r-n)/n+1) << endl;

		}

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

