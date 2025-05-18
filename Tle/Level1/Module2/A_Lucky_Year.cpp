/* 
user - ritesht
18-05-2025
16-27-36
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
bool isLucky(long long n){
    long long  count_pos = 0;
    while(n){
        if(n%10 != 0) count_pos++;
        if(count_pos > 1) return false;
        n /= 10;

    }
    return true;
}
void solve(){
    long long n;
    cin >> n;
    long long store = n+1;
    while(store <= 1000000000){
        if(isLucky(store)) break;
        store++;

    }
    cout << store -n << endl;
    return;

}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}