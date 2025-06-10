/* 
user - ritesht
05-06-2025
04-20-09
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){

    lli n ;
    cin >> n;
    lli arr[n+1];
    for(lli i = 1; i <= n;i++){
        cin >> arr[i];
    }
    lli count = 0;
    lli sum = 0;
    bool flag  = false;
    for(lli i = 1; i <= n-1;i++){
        sum += arr[i];
        if(arr[i] > 0) flag = true;
        if(arr[i] == 0 and flag == true) count++;
    } 
    cout << ( sum + count ) << endl;
    return;

}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  int tt;
  cin >> tt;
  while(tt--) solve();


  return 0;
}