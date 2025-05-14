/* 
user - ritesht
12-05-2025
05-20-23
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
const int Max = 2e5;
int arr[Max];

void solve(){


    lli n;
    cin >> n;
    int min_val = INT_MAX;
    int  max_val = INT_MIN;
    for(int i = 0; i < n;i++){
        cin >> arr[i];
        min_val = min(min_val, arr[i]);
        max_val = max(max_val, arr[i]);

    }
    lli count_min = 0;
    lli count_max = 0;
  
    for(int i= 0;i < n;i++){
        if(arr[i] == min_val) count_min++;
        if(arr[i] == max_val) count_max++;
    }
    cout <<  (max_val -min_val) << " ";
    if(min_val == max_val) {
        cout << n*(n-1)/2;
    }else{
         cout << count_min*count_max << endl;
    }


    return;

}

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}