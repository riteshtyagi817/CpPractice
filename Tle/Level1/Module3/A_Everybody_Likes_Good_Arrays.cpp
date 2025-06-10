/* 
user - ritesht
28-05-2025
05-33-40
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){


    int n;
    cin >> n;
    int in[n];
    for(int i =0; i < n;i++) cin >> in[i];
    int ans = 0;
    /*
    int k = 0;
    for(int i = 0; i < n;i++){
        if(i == 0 or (in[i-1]%2 == in[i]%2)) k++;
        else{
            ans += k-1;
            k = 1;
        }
    }
    ans += k-1;
    */
   for(int i = 0; i < n-1;i++){
    if(in[i]%2 == in[i+1]%2){
        ans++;
    }
   }
    cout << ans << endl; 
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