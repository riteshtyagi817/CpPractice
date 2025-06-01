/* Date: Sun Jun  1 08:02:04 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	int n;
	cin >> n;
	vector<int> in;
	int val;
	for(int i= 0; i <n-1;i++){
		cin >> val;
		in.push_back(val);
	}
	sort(in.begin(), in.end());

	for(int i = 0; i <n-1;i++){
		if(in[i] != i+1) {
			cout << (i+1) << endl;
			return;
		}
	}
	cout << n  << endl;

	return;


}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}

