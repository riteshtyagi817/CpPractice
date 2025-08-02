/* 
user - ritesht
01-07-2025
06-13-15
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
#define int long long 
void solve(){

    int n;
    cin >> n;
    vector<pair<int,int>> store;
    vector<int> ans(n,0);
    // vector<int> ans;
     long long temp = 0;
     int i = 0;
     int ele = 0;
     int copy = n;
     while(n--){
        cin >> ele;
        store.push_back({ele,i});
        i++;

     }
     int curr = 1;
     sort(store.begin(), store.end());
     int value = 1;

     for(int i = copy-1; i >= 0;i--){

         ans[store[i].second] = curr;

        temp += 2*(store[i].first)*abs(curr);
        if(curr > 0){
            curr = curr*(-1);

        }else{
            curr = curr*(-1);
            curr++;
        }
        

        
     }
     cout << temp << endl;
     cout << 0 << " ";
     for(const auto &val:ans){
        cout << val << " ";
        
     }
     cout << endl;


     return;

}
signed  main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  int tt;
  cin >> tt;
  while(tt--) solve();


  return 0;
}