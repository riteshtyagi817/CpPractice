/* 
user - ritesht
18-05-2025
15-27-14
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int one_match = 0;
    if(a > b) {
        swap(a,b);
    }
    for(int i = a; i <= b;i++){
        if(i == c) one_match++;
        if(i == d) one_match++;
    }
    if(one_match == 1) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
    return;


}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  int tt;
  cin >>tt;
  while(tt--) solve();


  return 0;
}