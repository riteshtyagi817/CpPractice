/* 
user - ritesht
29-05-2025
07-00-40
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){

    int a, b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    int in[5];
    in[0] = a,
    in[1] = b;
    in[2]  = c;
    in[3] = d;
    in[4] = e;
    for(int i = 0; i < 5;i++){
        int val = in[i];
        int count = 1;
        for(int j = 0; j < 5;j++){
            if(i != j){
             if(val == in[j])count++;
            }

        }
        if(count != 3 and count != 2){
            cout << "No" << endl;
            return;
        }


    }
    cout << "Yes" << endl;
    return;



}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}