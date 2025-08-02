/* 
user - ritesht
22-07-2025
16-44-58
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){
    int n;
    cin >> n;
    if(n%2 != 0){
        cout << (n-1)/2 << endl;
    }else cout << n/2 << endl;
    return;
}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  int tt;
  cin >> tt;
  while(tt--)solve();


  return 0;
}