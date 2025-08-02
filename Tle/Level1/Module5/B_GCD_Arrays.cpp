/* 
user - ritesht
27-07-2025
11-07-17
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
#define int long long
void solve(){

    int l,r,k;
    cin>> l >> r >> k;
    if(l == r){
        if(l == 1){
            cout << "NO" << endl;
            return;
        }else{
            cout << "YES" << endl;
            return;
        }
    }
    int num = (r-l)+1;
    int numOdd = 0;
    if(num%2 == 0){

        numOdd = num/2;


    }else{
        numOdd = num/2;
        if(l % 2 != 0 or r%2 != 0){
            numOdd++;
        }
    }
    if(numOdd <= k){
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
    return;


}

signed main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  int tt;
  cin >> tt;
  while(tt--)solve();
  


  return 0;
}