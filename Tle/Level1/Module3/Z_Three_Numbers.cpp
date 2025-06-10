/* 
user - ritesht
03-06-2025
04-39-20
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){

    int k, s;
    cin >> k >> s;
    int count = 0;
    int min = s-2*k;
    int max = s;
    for(int x = 0; x <= k;x++){
        for(int y = 0; y <= k;y++){
            int z = s-(x+y);
            if(z >= 0 and z <= k) count++;
        }
    }
    cout << count << endl;
    return;



}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}