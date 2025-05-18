/* 
user - ritesht
17-05-2025
06-19-14
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){

    int n;
    cin >> n;
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= n;j++){
            if(i == 1 or j == 1 or i == n or j == n) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    

    return;


}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();
  return 0;
}