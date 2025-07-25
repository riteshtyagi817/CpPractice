/* Date: Sat Jul 19 23:39:51 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	string in;
	int n; 
	cin >> n;
	cin.ignore();
	while(n--){

		//in.clear();
		cin >> in;
		int end  = in.length() -1;
		//int val = stoi(in);
		if(in == "1" or in == "4" or in == "78"){
			cout << "+" << endl;
			
		}else if(in.length() >= 2 and in[end] == '5' and in[end-1] == '3'){
				cout << "-" << endl;
		}else if(in[0] == '9' and in[in.length()-1] == '4'){
			cout << "*" << endl;
		}else if(in.length() >= 3 and in[0] == '1' and in[1] == '9' and in[2] == '0'){
			cout << "?" << endl;
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

