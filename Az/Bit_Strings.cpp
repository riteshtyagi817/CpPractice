/* 
user - ritesht
11-05-2025
21-58-21
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
const int mod = 1e9+7; 
lli bin_pow(lli a, lli b){

   lli prod = a;
   lli ans = 1;
   while(b){
    if(b%2 == 1){
        ans = ((ans%mod)*(prod%mod))%mod;
    }
    prod = ((prod%mod)*(prod%mod))%mod;
    b /= 2;
   }
   return ans;


}
void solve(){
    int n;
    cin >> n;
    lli result = bin_pow(2,n);
    cout << result << endl;

}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
 
  solve();




  return 0;
}