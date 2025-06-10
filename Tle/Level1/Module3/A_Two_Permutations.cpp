/* 
user - ritesht
28-05-2025
05-48-48
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){

   int n,a, b;
   cin >> n >> a >> b;
   if((n == a and (a == b)) or (a+b+1 < n)) cout << "Yes" << endl;
   else cout << "No" << endl;
   return;



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