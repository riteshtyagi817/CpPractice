/* 
user - ritesht
10-06-2025
06-02-53
*/
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using lli = long long;
void solve(){

	lli n;
	cin >> n;
	lli arr[n+1];
	for(int i = 1; i <= n;i++){

		cin >> arr[i];
	}
	lli pos = 0;
	lli rem_neg = 0;
	for(int i = 1; i <= n;i++){

		if(arr[i] >= 0){
			pos += arr[i];
		}else{

			if(pos >= abs(arr[i])){
				pos -= abs(arr[i]);

			}else{
				rem_neg += (abs(arr[i]) - pos);
				pos = 0;

			}

		}

	}
	cout << rem_neg << endl;


}
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	int tt;
	cin >> tt;
	while(tt--)solve();


}