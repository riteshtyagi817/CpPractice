/* 
user - ritesht
28-07-2025
06-18-58
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){

    int n;
    cin >> n;
    if(n%2 == 0){
        int num = (n-1)/2;
        cout << num << " " << num+1 << " " << 1 << endl;
    }else {
        int num = (n-1)/2;
        if(num % 2 == 0){
            cout << num -1 << " " << num + 1 << " " << 1 << endl;
        }else cout << num - 2 << " " << num + 2 << " " << 1 << endl;

    }
    return;


}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  int tt;
  cin >> tt;
  while(tt--)solve();


  return 0;
}