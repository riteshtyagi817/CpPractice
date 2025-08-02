/* 
user - ritesht
24-06-2025
04-30-02
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
int check_case(int a, int b , int c){
    if(b % 2 == c % 2) return 1;
    else return 0;
}
void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    int ans[3];
    ans[0] = check_case(a, b,c);
    ans[1] = check_case(b, a, c);
    ans[2] = check_case(c, a, b);
    for(const auto &i:ans){
        cout << i << " ";
    }
    cout << endl;
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