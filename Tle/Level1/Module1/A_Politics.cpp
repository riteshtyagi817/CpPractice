/* 
user - ritesht
11-05-2025
09-04-07
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve() {
    int n, k;
    cin >> n >> k;
    string t[n];
    int ans = n;
    for(int i = 0; i < n; i++) {
        cin >> t[i];
        if(t[i] != t[0]) {
            ans--;
        }
    }
    cout << ans << "\n";
}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  int tt;
  cin >> tt;
  while(tt--) solve();


  return 0;
}