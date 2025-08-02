/* 
user - ritesht
30-07-2025
06-13-33
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
#define int long long
// it can be too slow
int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b%a, a);
  
}
void solve(){
    int n;
    cin >> n;
    int in[n];
    vector<int> track(n,0);
    int count = 0;
    for(int i = 0; i < n;i++) cin >> in[i];
    for(int i =0; i < n-1;i++){
        if(gcd(in[i], in[i+1]) != 1){
            track[i] = 1;
            count++;
        }

    }
    cout << count << endl;
    for(int  i = 0; i < n;i++){
        cout << in[i] << " ";
        if(track[i] == 1) cout << 1 << " ";
    }
    cout << endl;
    return;
    


}


signed main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}