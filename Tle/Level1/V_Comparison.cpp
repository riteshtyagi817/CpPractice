/* 
user - ritesht
10-05-2025
00-39-34
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){

    int a,b;
    char op;
    cin >> a >> op >> b;
    switch(op){

        case '>':
        if(a > b) cout << "Right" << endl;
        else cout << "Wrong" << endl;
        break;

        case '<':
        if(a < b) cout << "Right" << endl;
        else cout << "Wrong" << endl;
        break;
        case '=':
        if(a == b) cout << "Right" << endl;
        else cout << "Wrong" << endl;
        break;
        default:
        break;
        
    }
    return;
}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}