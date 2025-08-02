/* 
user - ritesht
21-07-2025
07-36-55
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
#define int long long
void solve(){
    int x;
    cin >> x;
    int flag = 1;
    while(x >= 10){
        int digit = x%10;
        if(flag == 1){
            flag = 0;
            if(digit > 8){
                cout << "NO" << endl;
                return;
            }
        }else{
            if(digit == 0){
             cout << "NO" << endl;
             return;
            }
        }
        x /= 10;

    }

    if(x == 1){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

}
signed  main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  int tt;
  cin >> tt;
  while(tt--) solve();


  return 0;
}