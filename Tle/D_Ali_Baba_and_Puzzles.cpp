/* 
user - ritesht
10-05-2025
00-58-46
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){


    lli a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a + b -c == d) cout << "YES" << endl;
    else if(a+b*c == d) cout << "YES" <<endl;
    else if(a-b+c == d) cout << "YES" << endl;
    else if(a-b*c == d) cout << "YES" << endl;
    else if(a*b+c == d) cout << "YES" << endl;
    else if(a*b-c == d) cout << "YES" << endl;
    else cout << "NO" << endl;


    return;

}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}