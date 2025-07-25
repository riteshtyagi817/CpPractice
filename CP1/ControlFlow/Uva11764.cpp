/* Date: Tue Jul 22 11:02:11 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	static int idx = 0;
	idx++;
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n;i++){
		cin >> arr[i];
	}
	int low_jump = 0;
	int high_jump = 0;
	for(int i = 0; i < n-1;i++){
		if(arr[i] < arr[i+1]) high_jump++;
		else if(arr[i] > arr[i+1]) low_jump++;

	}
	cout << "Case " << idx << ": " << high_jump << " " << low_jump << endl;
	return;


}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int tt;
	cin >> tt;
	while(tt--)solve();

	return 0;
}

