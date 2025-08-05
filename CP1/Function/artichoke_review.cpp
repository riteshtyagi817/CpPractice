/* Date: Sun Aug  3 23:24:42 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
double find_val(vector<double> &st){


	double ans = 0;
	double curr_max = 0;
	for(int i = 0; i < st.size();i++){

		
		if(st[i] < curr_max){
			if(ans < (curr_max - st[i])){
				ans = curr_max - st[i];
			}
		}else curr_max = st[i];
		

	}
	return ans;


}
void solve(){

	int p, a, b,c,d,n;
	double val = 0.0;
	cin >> p >>  a >> b >> c >> d >> n;

	vector<double> st(n,0);
	//st.clear();
	for(int k = 1; k <= n;k++){

		val = p*(sin(a*k+b) + cos(c*k+d)+2);
		st[k-1] = val;
	}
	cout << fixed << setprecision(6) << find_val(st) << endl;




	return;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}

