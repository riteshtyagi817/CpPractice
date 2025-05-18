/* 
user - ritesht
18-05-2025
15-13-46
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n;i++) cin >> arr[i];
    int c_even  = 0;
    int c_odd = 0;
    for(int i = 0; i < n;i++){
        if(i%2 == 0 and arr[i]%2 != 0) c_even++;
        else if(i%2 != 0 and arr[i] %2 == 0) c_odd++;
    }
    if(c_even == c_odd) {
        cout << c_even << endl;
    }
    else {
        cout << "-1" << endl;
    }
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