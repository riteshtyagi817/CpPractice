/* 
user - ritesht
16-05-2025
06-10-33
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){
    int n;
    cin >> n;
    if(n <= 2) {
        cout << (n-1) << endl;
        return;
    }
    lli first = 0;
    lli second = 1;
    lli result = 0;
    for(int i = 3; i <=n;i++){
        result = first + second;
        first = second;
        second = result;
        
    }
    cout << result << endl;
    return;
}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}