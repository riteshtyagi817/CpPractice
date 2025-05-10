/* 
user - ritesht
10-05-2025
00-54-07
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){
    lli a, b,k;
    cin >> a >> b >> k;
    if(a%k == 0 and b%k == 0) cout << "Both" << endl;
    else if(a% k == 0 and b%k != 0) cout << "Memo" << endl;
    else if(a%k != 0 and b%k == 0) cout << "Momo" << endl;
    else cout << "No One" << endl;
    return;

}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}