/* Date: Sat Jun  7 12:44:36 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	int g, s, c ;
	int total = 0;
	while(cin >> g >> s >> c){

		total = 3*g + 2*s + 1*c;
		if(total >= 8){
			cout << "Province or Gold" << endl; 
		}else if(total >= 6){
			cout << "Duchy or Gold" << endl;
		}else if(total >= 5){	
			cout << "Duchy or Silver" << endl;
		}else if(total >= 3){
			cout << "Estate or Silver" << endl;
		}else if(total >= 2){
			cout << "Estate or Copper" << endl;
		}else {
			cout << "Copper" << endl;
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

