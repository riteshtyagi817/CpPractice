/* 
user - ritesht
05-06-2025
07-11-57
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i <n;i++){
        cin >> arr[i];
    }
    int result = 0;
    int count_arr[101];
    for(int i = 0; i < 101;i++) count_arr[i] = 0;

    for(int i = 0; i < n;i++){
        count_arr[arr[i]]++;
    }
    int ans1 = 0;
    int ans2 = 0;
    for(int i = 0; i < 101;i++){
        if(count_arr[i] == 0) {
            ans1 = i;
            break;
        }
    }
    for(int i = 0 ; i < 101;i++){
        if(count_arr[i] <= 1){
            ans2 = i;
            break;
        }
    }
    cout << (ans1 +  ans2) << endl;

    



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