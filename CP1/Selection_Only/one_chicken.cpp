/* Date: Sat Jun  7 12:20:28 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	int num_p;
	int num_c;
	while(cin >> num_p >> num_c){
		
		if(num_p < num_c){
	
			if((num_c - num_p) == 1){
				cout << "Dr. Chaz will have " << (num_c - num_p) <<  " piece of chicken left over!" << endl;
			}else{
				cout << "Dr. Chaz will have " << (num_c - num_p) <<  " pieces of chicken left over!" << endl;
			}
		}else{
			if((num_p - num_c) == 1){
				cout << "Dr. Chaz needs " << (num_p - num_c)  << " more piece of chicken!" << endl;
			}else{

				cout << "Dr. Chaz needs " << (num_p - num_c)  << " more pieces of chicken!" << endl;
				
			}
			
		}
	
	}
	
	return;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	solve();
	return 0;
}

