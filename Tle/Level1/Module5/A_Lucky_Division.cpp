/* 
user - ritesht
22-07-2025
04-17-42
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
bool isLucky(int n){
    while(n){
        if(n%10 != 4 and  n%10 != 7) return false;
        n /= 10;
    }
    return true;
}
void solve1(){



    int n;
    cin >> n;
    int flag = false;
    for(int i = 1; i <=n;i++){
        if(n%i == 0 and isLucky(i)){
            flag = true;
            break;

        }
    }
    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }



    return;
}
void solve(){
    int n;
    cin >> n;
    set<int> st;
    for(int i = 1; i <= 1000;i++){
        if(isLucky(i)){
            st.insert(i);
        }
    }
    set<int> final;
    for(auto val:st){
        int idx = 1;
        int copy = val;
        while(val <= 1000){
            val  = copy*idx;
            final.insert(val);
            idx++;
        }
    }
    if(st.find(n) != st.end() or final.find(n) != final.end()){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return;
}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  //solve();
  solve1();


  return 0;
}