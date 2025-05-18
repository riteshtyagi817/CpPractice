/* 
user - ritesht
17-05-2025
05-17-29
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){
    int n;
    cin >> n;
    int t;
    cin >> t;
    string in;
    cin >> in;
    while(t--){
     for(int  i = 0; i < n-1;i++){
         if(in[i] == 'B' and in[i+1] == 'G') {
            swap(in[i], in[i+1]);
            i++;

         }
        
     }
}
    cout << in << endl;

}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();
  return 0;
}