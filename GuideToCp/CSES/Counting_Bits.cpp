#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

ll countOne(ll i){

	ll count = 0;
	ll len = sizeof(i)*8;
	while(len--){

		if(1&i) count++;
		i >>= 1;

	}
	return count;
}
void solve(){

	ll n;
	cin >> n;
	ll count = 0;

	
	for(ll i = 1; i <=n;i++){

		//count += __builtin_popcount(i);
		count += countOne(i);
	}
	cout << count << endl;
	return;

}
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	solve();


}
