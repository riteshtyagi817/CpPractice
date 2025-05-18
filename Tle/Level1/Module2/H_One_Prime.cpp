/* 
user - ritesht
14-05-2025
08-16-16
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){
    int n;
    cin >> n;
    if(n == 1){
        cout << "NO" << endl;
        return;

    }
    for(int i = 2; i <= sqrt(n);i++){
        if(n%i == 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" <<endl;



    return ;
}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}