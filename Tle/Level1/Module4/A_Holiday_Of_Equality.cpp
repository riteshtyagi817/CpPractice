/* 
user - ritesht
27-06-2025
04-33-50
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){
    int n;
    cin >> n;
    int a[n];
    int max_result = INT_MIN;
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    for(int i = 0; i < n;i++){
        max_result = max(max_result, a[i]);
    }
    long long ans = 0;
    for(int i = 0; i < n;i++){
        if(a[i] != max_result){
            ans += (max_result - a[i]);
        }
    }
    cout << ans << endl;
    return;



}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}