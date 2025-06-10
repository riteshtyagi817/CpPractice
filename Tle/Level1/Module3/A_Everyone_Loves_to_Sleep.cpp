/* 
user - ritesht
03-06-2025
11-29-05
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){

    int n, h, m;
    cin >> n >> h >> m;
    int min_val = INT_MAX;
    int result = 0;
    int hh,mm;
    int temp = 0;
    int actual = h*60 + m;
    while(n--){
        cin >> hh >> mm;
        temp = (hh*60) + mm;
        int diff = (temp - actual);
        if(diff < 0){
            diff += 1440;
        }
        min_val = min(min_val, diff);

         
    }
    cout << min_val /60 << " " << min_val%60 << endl;
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