/* Date: Mon Jul 28 05:26:40 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	int s0,s1,r0,r1;
	while(1){

		cin >> s0 >> s1 >> r0 >> r1;
		if(s0 == 0 and s1 == 0 and r0 == 0 and r1 == 0) break;
		int num1 = max(s0,s1)*10 + min(s0,s1);
		int num2 = max(r0,r1)*10 + min(r0,r1);
		if(num1 == 21 and num2 != 21){
			cout << "Player 1 wins." << endl;
		}else if(num2 == 21 and num1 != 21){
			cout << "Player 2 wins." << endl;
		}else if(num1 == 21 and num2 == 21){
			cout << "Tie." << endl;
		}else if((s0 == s1) and (r0 != r1)){
			cout << "Player 1 wins." << endl;
		}else if((r0 == r1) and (s0 != s1)){
			cout << "Player 2 wins." << endl;
		}else if(num1 > num2){
			cout << "Player 1 wins." << endl;
		}else if(num2 > num1){
			cout << "Player 2 wins." << endl;
		}else {
			cout << "Tie." << endl;

		}

		
	}



	return;

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}

