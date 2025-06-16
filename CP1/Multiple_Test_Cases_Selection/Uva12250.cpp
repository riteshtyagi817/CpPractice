/* Date: Sat Jun 14 15:36:09 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ENG "HELLO"
#define SPA "HOLA"
#define GER "HALLO"
#define FRE "BONJOUR"
#define ITA "CIAO"
#define RUS "ZDRAVSTVUJTE"
void solve(){

	string in;
	int count = 0;
	while(cin >> in){
		count++;	
		if(in == "#") break;
		if(in == ENG) cout << "Case " << count << ": " << "ENGLISH" << endl;
		else if(in == SPA) cout << "Case " << count << ": " << "SPANISH" << endl;
		else if(in == GER) cout << "Case " << count << ": " << "GERMAN" << endl;
		else if(in == FRE) cout << "Case " << count << ": " << "FRENCH" << endl;
		else if(in == ITA) cout << "Case " << count << ": " << "ITALIAN" << endl;
		else if(in == RUS) cout << "Case " << count << ": " << "RUSSIAN" << endl;
		else cout << "Case " << count << ": " << "UNKNOWN" << endl;
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

