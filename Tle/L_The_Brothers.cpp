/* 
user - ritesht
10-05-2025
00-33-47
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){
    string f1, s1;
    string f2, s2;
    cin >> f1 >> s1;
    cin >> f2 >> s2;
    if(s1 == s2){
        cout << "ARE Brothers" << endl;
    }else{
        cout << "NOT" << endl;
    }
    return;

}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();



  return 0;
}