/* 
user - ritesht
12-05-2025
06-32-41
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
unordered_map<string,int> st;
void create_map(){
    string temp;
    char c1;
    char c2;
    int count = 1;
    for(int i= 0; i < 26;i++){
        c1 = i+'a';
        for(int j = 0; j < 26;j++){
            c2 = j + 'a';
            temp += c1;
            temp += c2;
            if(c1 != c2){
            st[temp] = (count);
            count++;
            }
            temp.clear();
            
        }
    }
}
void solve(){


    string in;
    cin >> in;

    //cout << ((in[0]-'a'+1)+(in[1] -'a'+1)) - (in[0] -'a'+1) << endl;
    cout << st[in] << endl;



    return;

}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  create_map();
  int tt;
  cin >> tt;
  while(tt--)solve();


  return 0;
}