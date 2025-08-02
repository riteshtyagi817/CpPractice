/* 
user - ritesht
06-07-2025
13-33-49
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solveToh(int n , int a, int b , int c){

    if(n == 0) return;
    solveToh(n-1, a, c, b);
    cout << a << " " << c << endl;
    solveToh(n-1,b,a,c);
    return;


}

void solve(){

    int n;
    cin >> n;
    cout << (1 << n) -1 << endl;
    solveToh(n,1,2,3);

    return;



}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}