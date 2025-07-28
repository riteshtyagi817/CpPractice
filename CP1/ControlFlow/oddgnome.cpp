/* Date: Sat Jul 26 17:02:14 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	int n;
	cin >> n;
	int ans = 0;
	int in[n];
	for(int i = 0; i < n;i++) cin >> in[i];
	for(int i = 1; i < n;i++){
		if(in[i] != in[i-1]+1){
			ans = i+1;
			break;
		}	
		
	}
	cout << ans << endl;
	




	return;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int tt;
	cin>> tt;
	while(tt--)solve();
	return 0;
}

