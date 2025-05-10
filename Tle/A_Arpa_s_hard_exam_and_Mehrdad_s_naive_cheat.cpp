#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int mod = 1e9+ 7;
int bin_pow(int a, int n){
    if(n == 0) return 1;
    int res = 0;
    if(n%2 == 1){
        res = bin_pow(a,(n-1)/2)%10;
        res = ((res%10) *(res%10))%10;
        res = ((a%10)*(res%10))%10;
        return res; 
    }
    else{
        res = bin_pow(a,n/2)%10;
        res = ((res%10)*(res%10))%10;
        return res;

    }
    return res;
}
void solve(){

    int n;
    cin >> n;
    int a = 1378;
    int res = bin_pow(a,n);
    cout << res%10 << endl;


}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;

}