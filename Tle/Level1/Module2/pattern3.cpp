/* 
user - ritesht
15-05-2025
05-43-57
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){

    int n;
    cin >> n;
    for(int i = 0; i < n;i++){
        for(int spaces = 0; spaces < n-i;spaces++){
            cout << " ";
        }
        for(int j = 0; j < i+1;j++){
            cout << "* ";
        }
       // for(int spaces = 0; spaces < n-i;spaces++){
         //   cout << " ";
        //}
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