/* 
user - ritesht
10-06-2025
06-04-02
*/
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int sumDigits(int n){

	int sum = 0;
	while(n){

		sum += (n%10);
		n /= 10;
	}
	return sum;


}
void solve(){

	int k;
	cin >> k;
	int value = 1;
	while(k){

		if(sumDigits(value) == 10){
			k--;		
		}
		if(k == 0) break;
		value++;
	}
	cout << value << endl;

}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	solve();
	return 0;

}