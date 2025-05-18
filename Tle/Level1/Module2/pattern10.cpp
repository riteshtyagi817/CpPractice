/* 
user - ritesht
18-05-2025
09-59-07
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


        if(i == n){
            int stars = 2*i -1;
            while(stars--) cout << "*";
        }
        else {
         int stars = 2*i -1;

         int idx = 0;
         int end  = stars-1;
         while(idx <= end){
             if(idx == 0 or idx == end) cout << "*";
             else cout << " ";
             idx++;
         }
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