/* 
user - ritesht
24-06-2025
04-20-28
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){

    int n;
    cin >> n;
    char in[n];
    
    for(int i = 0; i < n;i++) cin >> in[i];
    int total_count = 0;
    bool done = false;
    int current_count = 0;
    for(int i = 0; i < n;i++){
        if(in[i] != '#'){
            current_count++;
        }else{
            if(current_count >= 3){
                done = true;
                break;

            }
            total_count += current_count;
            current_count = 0;
        }
    }
    total_count += current_count;
    if(current_count >= 3) done = true;
    if(done){
        cout << 2 << endl;
    }else{
        cout << total_count << endl;
    }





    return;
}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  int tt;
  cin >> tt;
  while(tt--)solve();


  return 0;
}