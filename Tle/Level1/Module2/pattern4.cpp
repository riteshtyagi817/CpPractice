/* 
user - ritesht
16-05-2025
05-58-03
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'

void solve(){
    int n;
    cin >> n;
    int rows = 5;
    for(int i = 0; i < rows;++i){
        for(int j = 0; j < rows-i;j++){
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