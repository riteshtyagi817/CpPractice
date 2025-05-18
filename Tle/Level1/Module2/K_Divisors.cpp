/* 
user - ritesht
14-05-2025
07-23-55
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){
    int n;
    cin >> n;
    for(int i = 1; i <= n;i++){
        if(n%i == 0) cout << i << endl;
    }
    return;
}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}