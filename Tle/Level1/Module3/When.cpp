/* 
user - ritesht
30-05-2025
07-04-03
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){

    int k;
    cin >> k;
    int start = 21;
    start += k/60;
    int rem = k%60;
    string out = "";
    if(rem < 10){
        out += '0';
        out += rem + '0';

    }else {
        out = to_string(rem);
    }
    cout << to_string(start) << ":" << out << endl;
    return;





}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}