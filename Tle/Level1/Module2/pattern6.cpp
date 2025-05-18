/* 
user - ritesht
17-05-2025
05-10-38
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){
    int n;
    cin >> n;
    for(int i =0; i < n;i++){
        int spaces = i;
        while(spaces--){
            cout << " ";
        }
        for(int j = 0; j < 4;j++){
            cout << "*";
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