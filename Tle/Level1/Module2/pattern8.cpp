/* 
user - ritesht
17-05-2025
06-19-14
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){

    int n;
    cin >> n;
    for(int i = n-1; i >=0;i--){
        int spaces = n-i-1;
        while(spaces--) cout << " ";
        int stars = i+1;
        while(stars--) cout << "* ";
        cout << endl;
        
    }
    for(int i = 0; i < n;i++){
        int spaces = n-i-1;
        while(spaces--) cout << " ";
        int stars = i+1;
        while(stars--) cout << "* ";
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