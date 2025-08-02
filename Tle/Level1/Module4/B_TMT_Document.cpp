/* 
user - ritesht
05-07-2025
10-30-44
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){


    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> t,m;
    for(int i = 0; i < n;i++){
        if(s[i] == 'T'){
            t.push_back(i);
        }else if(s[i] == 'M'){
            m.push_back(i);
        }
    }
    if(t.size() != 2*m.size()){
        cout << "NO" << endl;
        return;
    }
    for(int i = 0; i < m.size();i++){
        if(m[i] < t[i] or m[i] > t[i+m.size()]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;


    /*
    int n;
    cin >> n;
    int num_t = 0;
    int num_m = 0;
    string in;
    cin >> in;
    if(n == 3){
        if(in == "TMT"){
            cout << "YES" << endl;
            return;

        }else {
            cout << "NO" << endl;
            return;
        }
    }
    for(int i = 0; i < n;i++){
        if(in[i] == 'T') num_t++;
        else if(in[i] == 'M') num_m++;
        if(num_m >= 1 and num_t < num_m){
            cout << "NO" << endl;
            return;
        }
        if(i == 0 or i == n-1){
            if(in[i] == 'M'){
                cout << "NO" << endl;
                return;
            }
        }
    }
    int num_after_m = 0;
    int num_before_m = 0;
    for(int i = n-1; i >= 0;i--){
        if(in[i] != 'M'){
            num_after_m++;
        }else break;
    }
    for(int i =0; i < n;i++){
        if(in[i]  != 'M'){
            num_before_m++;
        }else break;
    }
    if(num_m == 0) {
        cout << "NO" << endl;
        return;
        
    }else if(num_m*2 == num_t){
        if(num_before_m == num_after_m)
           cout << "YES" << endl;
        else cout << "NO" << endl;
        return;
    }else {
        cout << "NO" << endl;
    }   */
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