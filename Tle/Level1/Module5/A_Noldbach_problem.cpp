/* 
user - ritesht
28-07-2025
04-54-14
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
bool isPrime(int n){
    if(n == 1) return false;

    for(int i = 2; i*i <= n;i++){
        if(n%i == 0) return false;

    }

    return true;
}
void solve(){

    int n,k;
    cin >> n >> k;
    vector<int> in;
    for(int i = 2; i <= n;i++){
        if(isPrime(i)) in.push_back(i);
    }
    unordered_set<int> st;
    for(int i = 0; i < in.size()-1;i++){
        st.insert(in[i] + in[i+1]);
    }
    int count = 0;
    for(int i = 0; i < in.size();i++){
        if(st.find(in[i]-1) != st.end()) count++;
    }
    if(count >= k){
        cout << "YES" << endl;
    }else cout  << "NO" << endl;
    return;



}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}