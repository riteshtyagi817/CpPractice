/* 
user - ritesht
28-05-2025
06-12-06
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){
    int n;
    cin >> n;
    int val1 = n%5;
    int val2 = 5-val1;
    if(val1 <= val2){
        cout << n-val1 << endl;
    }else{
        cout << n+val2 << endl;
    }
    return;
    /*
    if(n == 1 or n == 100) cout << n << endl;
    else if(n == 0) cout << 1 << endl;
    else if(n < 5){
        int a = n-1;
        int b = 5-n;
        if(a <= b){
            cout << 1 << endl;
            return;
        }else {
            cout << 5 << endl;
            return;
        }
    }
    else{
        if(n%5 == 0) cout << n << endl;
        else{
            int a = (n/5)*5;
            int b = (n/5)*5 + 5;
            if(abs(n-a) <= abs(n-b)){
                cout << a << endl;
            }else {
                cout << b << endl;
            }
        }

    } */
    return;
}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}