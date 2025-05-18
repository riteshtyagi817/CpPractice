/* 
user - ritesht
18-05-2025
09-53-50
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){
    
    string in;
    cin >> in;
    int lower_count = 0;
    int upper_count =0 ;
    for(auto &val:in) {
        if(islower(val)) lower_count++;
        else upper_count++;
    }
    if(lower_count > upper_count){
        transform(in.begin(), in.end(), in.begin(),::tolower);

    }else if(lower_count< upper_count){
        transform(in.begin(), in.end(), in.begin(),::toupper);

    }else {
        transform(in.begin(), in.end(), in.begin(),::tolower);

    }
    cout << in << endl;
    return;
}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}