/* 
user - ritesht
14-05-2025
07-21-11
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){
    int n;
    cin >> n;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n-i-1;j++){
            cout << " ";
        }
        for(int j = 0; j <=i ; j++){
            cout << "*";


        }
        cout << endl;
    }
}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}