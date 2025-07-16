#include<bits/stdc++.h>
using namespace std;
void solve(int n){

	for(int fghij = 01234;fghij <= (98765/n);fghij++){
				
		int abcde = fghij*n;
		set<int> st;
		int temp = fghij;
		for(int i = 0; i < 5;i++){
			st.insert(temp%10);
			temp /= 10;
		}
		temp = abcde;
		for(int i = 0; i  < 5;i++){
			st.insert(temp%10);
			temp /= 10;
		}
		if(st.size() == 10){
			cout << fghij << "  " << abcde << endl;
		}

	}

	return;


}
int main(){


	int n;
	cin >> n;
	solve(n);
	return 0;
}
