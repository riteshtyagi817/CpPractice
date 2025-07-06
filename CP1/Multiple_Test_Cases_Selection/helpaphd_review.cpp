/* Date: Sat Jun 28 10:15:05 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){


	int a, b;
	string line;
	getline(cin, line);
	if(line == "P=NP"){
		cout << "skipped" << endl;
	}else {
		int pos  = line.find('+');
		a = stoi(line.substr(0,pos));
		b = stoi(line.substr(pos+1));
		cout << a + b << endl;

	}

	/*
	int a, b;
	char c;
	cin >> a >> c >> b;
	if(c == '+') cout << a+b << endl;
	else if(c == '-') cout << a-b << endl;
	else if(c == '*') cout << a*b << endl;
	else if(c == '/') cout << a/b << endl;
	else {
		cin >> c;
		cout << "skipped" << endl;
	}
	*/
	return;

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int tt;
	cin >> tt;
	cin.ignore();
	while(tt--)solve();
	return 0;
}

