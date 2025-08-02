/* 
user - ritesht
24-06-2025
05-56-20
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){
    int n,m;
    cin >> n >> m;
    int a[n+1];
    for(int i = 1; i <= n;i++){
        cin >> a[i];
    }
    int ele = 0;
    bool flag = false;
    while(m--){
        cin >> ele;
        flag = false;
        for(int i = 1; i <=n;i++){
            if(a[i] == ele){
                a[i] = -1;
                flag = true;
                break;
            }
        }
        if(flag == false){
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