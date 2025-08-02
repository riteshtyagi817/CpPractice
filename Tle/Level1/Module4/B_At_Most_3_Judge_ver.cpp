/* 
user - ritesht
25-06-2025
07-12-24
*/
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
void solve(){
    //cout << "check" << endl;
    int count[3000001] = {0};
    for(int i = 0; i < 3000001;i++){
        count[i] = false;
    }
    int ans = 0;
    int n,w;
    cin >> n >> w;
    int in[n];
    for(int i = 0; i < n;i++){
        cin >> in[i];
    }
    for(int i = 0; i < n;i++){
        count[in[i]] = true;
    }
    for(int i = 0; i < n;i++){
        for(int j =  i+1; j < n;j++){
            count[in[i] + in[j]] = true;
        }
    }
    for(int i = 0; i < n;i++){
        for(int j = i+1; j < n;j++){
            for(int k = j+1; k < n;k++){
                count[in[i] + in[j] + in[k]] = true;
            }
        }
    }
    for(int i = 1; i <= w;i++){
        if(count[i] == true) ans++;
    }
    cout << ans << endl;

    return;
}
signed  main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}