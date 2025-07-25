/* Date: Fri Jul 25 07:13:27 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	int x,y,n;
	cin >> x >> y >> n;
	for(int i = 1; i <= n;i++){
		if(i%x == 0 and i%y == 0){
			cout << "FizzBuzz" << endl;
		}else if(i%x == 0){
			cout << "Fizz" << endl;
		}else if(i%y == 0) {
			cout << "Buzz" << endl;
		}else{
			cout << i << endl;
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

