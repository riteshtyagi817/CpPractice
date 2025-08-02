/* 
user - ritesht
22-07-2025
18-29-57
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){

    lli n;
    cin >> n;
    while(n%2 == 0){
        n /= 2;
    }
    if(n != 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return;


}
void solve1(){
    lli n;
    cin >> n;
    if(n&n-1){
        cout << "YES" << endl;
    }else cout << "NO" << endl;
}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  lli tt;
  cin >> tt;
  //while(tt--)solve();
  while(tt--) solve1();


  return 0;
}