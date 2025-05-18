/* 
user - ritesht
16-05-2025
22-53-58
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){

    
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i = 0; i < n;i++) cin >> a[i];
    for(int i = 0; i < n;i++) cin >> b[i];
    sort(a, a+n);
    sort(b, b+n);

    for(int i = 0; i < n;i++){
        if(a[i] != b[i]) {
            cout << "no" << endl;
            return;
        }
    }
    cout << "yes" << endl;
    return;



}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}