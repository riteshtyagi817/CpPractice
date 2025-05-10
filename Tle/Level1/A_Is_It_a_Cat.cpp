/* 
user - ritesht
10-05-2025
10-42-21
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){

    int len ;
    cin >> len;
    string in;
    cin >> in;
    transform(in.begin(), in.end(), in.begin(),::toupper);
   // cout << in << endl;
    int idx = 0;
    //int len = in.length();
   
    if(in[idx] != 'M') {
        cout << "NO" << endl;
        return;

    }
    while(idx < len and in[idx] == 'M'){
        idx++;
    }
    if(in[idx] != 'E'){
        cout << "NO" << endl;
        return;


    }
    while(idx < len and in[idx] == 'E'){
        idx++;
    }
    if(in[idx] != 'O'){
        cout << "NO" << endl;
        return;

    }
    while(idx < len and in[idx] == 'O'){
        idx++;
    }
    if(in[idx] != 'W'){
        cout << "NO" << endl;
        return;
    }
    while(idx < len and in[idx] == 'W'){
        idx++;
    }
    //cout << in << idx << endl;
    if(idx != len){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;

    return;
}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  int tt;
  cin >> tt;
  while(tt--) solve();


  return 0;
}