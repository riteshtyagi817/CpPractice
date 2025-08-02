/* 
user - ritesht
27-07-2025
17-52-30
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
#define int long long
void solve(){

    int n,a,b;
    cin >> n >> a >> b;
    int x = -1, y = 0;
    for(y = 0; y <= 1e7;y++){
        if((n-y*b) % a == 0 and (n-y*b) >= 0){
            x = (n-y*b)/a;
            break;
        }
    }
    if(x == -1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        cout << x << " " << y << endl;

    }
    return;

}

signed  main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}