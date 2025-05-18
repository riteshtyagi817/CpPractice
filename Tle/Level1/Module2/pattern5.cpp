/* 
user - ritesht
16-05-2025
06-22-40
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){

    int n;
    cin >> n;
    for(int i = 0; i < n;i++){
        int spaces = i;
        while(spaces--){
            cout << " ";
        }
        int stars = n-i;
        while(stars--){
            cout << "* ";
        }
        spaces = i;
        while(spaces--){
            cout << " ";
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