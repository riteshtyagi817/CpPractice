/* 
user - ritesht
18-05-2025
16-23-32
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){
    int n;
    cin >> n;
    int idx = 1;
    for(int i = 1; i <= n;i++){
        int val = i;
        while(val--){
            cout << idx << " ";
            idx++;
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