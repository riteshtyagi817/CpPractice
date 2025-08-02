/* 
user - ritesht
25-07-2025
05-52-50
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
#define int long long
bool isPrime(int n){
    if(n == 1) return false;
    for(int i = 2; i*i <= n;i++){

        if(n%i == 0) return false;

    }
    return true;
}
void solve(){
    int a , b;
    cin >> a >> b;
    if(a-b > 1){
        cout << "NO" << endl;
        return;
    }
    if(isPrime(a+b)){
        cout << "YES" << endl;
    }else cout << "NO" << endl;
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