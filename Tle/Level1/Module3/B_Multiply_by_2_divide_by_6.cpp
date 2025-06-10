/* 
user - ritesht
28-05-2025
05-56-39
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){

    int n;
    cin >> n;
    int ans = 0;
    while(n != 1){
        if(n%6 == 0){
            ans += 1;
            n /= 6;
        }else if((n*2)%6 == 0){
            n *= 2;
            ans += 1;
        }
        else {
            break;
        }



    }
    if(n == 1) cout << ans << endl;
    else cout << -1 << endl;


}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  int tt;
  cin >> tt;
  while(tt--){
    solve();
  }


  return 0;
}