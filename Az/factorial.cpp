/* normal method to calculate the factorial after taking mod */

#include<bits/stdc++.h>
using namespace std;
using lli = long long;
lli mod = 1e9 + 7;
lli fact(lli x){

	lli ans = 1;
	for(lli i = 2; i <= x;i++){
		ans  = (ans*i)%mod;
	}
	return ans;

}
int main(){

	lli x;
	cin >> x;
	cout << fact(x) << "\n";
	return 0;


}
