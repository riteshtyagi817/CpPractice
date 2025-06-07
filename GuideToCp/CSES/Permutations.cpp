/* Date: Sat Jun  7 14:52:51 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> in;
	for(int i = 0;i < n;i++) in.push_back(i+1);
	bool flag = true;
	do{
		flag = true;
		for(int i = 0; i  < n-1;i++){
			
			if(abs(in[i] - in[i+1]) == 1) {
				flag = false;
				break;
			}
			
		}
		if(flag == true){
			for(const auto val:in) cout << val << " ";
			cout << endl;
			return ;
		}
		


	}while(next_permutation(in.begin(), in.end()));

	cout << "NO SOLUTION" << endl;
	return;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}

