/* 
user - ritesht
18-05-2025
16-13-45
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){
    int n;
    cin >> n;
    for(int i = 1; i <= n;i++){
        int spaces = n-i;
        while(spaces--) cout << " ";
        int stars = 2*i -1;
        int idx = 1;
        int end = stars;
        while(idx <= end){
            if(idx == 1 or idx == end) cout << "*";
            else cout << " ";
            idx++;
        }
        cout << endl;
        
    }
    for(int i = n-1; i >= 1;i--){
        int spaces = n-i;
        while(spaces--) cout << " ";
        int stars = 2*i -1;
        int idx = 1;
        int end = stars;
        while(idx <= end){
            if(idx == 1 or idx == end) cout << "*";
            else cout << " ";
            idx++;
        }
        cout << endl;
        
    }
    return ;
}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}