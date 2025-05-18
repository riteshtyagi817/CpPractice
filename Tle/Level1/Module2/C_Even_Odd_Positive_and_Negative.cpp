/* 
user - ritesht
14-05-2025
07-04-44
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){

   int n;
   cin >> n;
   int count_even = 0;
   int count_odd = 0;
   int count_pos = 0;
   int count_neg = 0;
   int num = 0;
   while(n--){
    cin  >> num;
    if(num% 2 == 0) count_even++;
    else count_odd++;
    if(num > 0) count_pos++;
    else if(num < 0) count_neg++;

   }
   cout << "Even: " << count_even << endl;
   cout << "Odd: " << count_odd << endl;
   cout << "Positive: " << count_pos << endl;
   cout << "Negative: " << count_neg << endl;


   cout << endl;


}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}