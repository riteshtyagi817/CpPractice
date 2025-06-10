/* 
user - ritesht
31-05-2025
18-00-28
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){

    int n;
    cin >> n;
    int in[n];
    for(int i = 0; i < n;i++) cin >> in[i];
    for(int i = 0; i < n-1;i++){
        if(abs(in[i] - in[i+1]) == 1){
            cout << in[i] << " ";
        }
        else {
            if(in[i] > in[i+1]){
                int val = in[i];
                int cmp = in[i+1];
                while(val != cmp){
                    cout << val << " ";
                    val--;
                }
            }else {
                int val = in[i];
                int cmp = in[i+1];
                while(val != cmp){
                    cout << val << " ";
                    val++;
                }

            }
        }


    }
    cout << in[n-1] << endl;
    return;



}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}