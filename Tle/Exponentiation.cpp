#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int MOD =  1e9+7;
using lli = long long;
 lli bin_pow(int a, int b){

    if(b == 0) return 1;
    long long  res = 0;
    if(b%2 == 1){
        res = bin_pow(a,(b-1)/2)%MOD;
        res = (res*res) %MOD;
        res = (a * res)%MOD;

    }
    else{
        res = bin_pow(a,b/2)%MOD;
        res = (res*res)%MOD;

    }
    return res;
}
void solve(){

        long long a, b;
        cin >> a >> b;
        long long  res = bin_pow(a,b)%MOD;
        cout << res << endl;

        return;

}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--) solve();



}