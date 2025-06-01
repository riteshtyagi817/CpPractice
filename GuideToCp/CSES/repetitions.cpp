/* Date: Sun Jun  1 08:30:34 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	string in;
	cin >> in;
	int count = 1;
	int result = INT_MIN;
	for(int i = 0; i < in.length()-1;++i){
		if(in[i] != in[i+1]) {
			result = max(result, count);
			count = 1;
		}
		else count++;

	}
	result  = max(result, count);
	cout << result << endl;
	return;

}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}

