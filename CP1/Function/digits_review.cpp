/* Date: Tue Aug  5 07:18:06 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int count_digits(int n){

	int ans = 0;
	while(n){
		ans++;
		n /= 10;
	}
	return ans;
}
void check_func(int n){

	int idx  = 1 ;
	int prev = n;
	int next = 0;

	while(1){
		next = count_digits(prev);
		idx++;
		if(prev == next){
			cout << idx << endl;
			return;
		}
		prev = next;
	}

	return;

}
void solve(){

	string in;
	int val = 0;
	while(cin >> in){

		if(in == "END") break;
		if(in == "1"){
			cout << 1 << endl;
			continue;
		}
		val = in.length();
		check_func(val);		

	}

}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}

