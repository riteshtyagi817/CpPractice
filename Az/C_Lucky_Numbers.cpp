/* 
user - ritesht
11-05-2025
22-10-25
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
const int mod = 1e9+7;
lli bin_pow(lli a, lli b){

    lli ans = 1;
    while(b){

        if(b%2){
            ans = ((ans%mod)*(a%mod))%mod;
        }
        a = ((a%mod)*(a%mod))%mod;
        b >>= 1;

    }
    return ans;


}
void solve(){


    /*
    int n;
    cin >> n;
    long double  res = 0;
    for(int i = 1; i <= n;i++){
        res += bin_pow(2,i);
    } */
   int n;
   cin >> n;
   long long res = (2LL << n)-2;
    cout << res << endl;

}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();



  return 0;
}