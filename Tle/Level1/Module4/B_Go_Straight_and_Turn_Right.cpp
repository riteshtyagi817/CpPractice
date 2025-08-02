/* 
user - ritesht
24-06-2025
06-10-49
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){
    int n;
    cin >> n;
    string in;
    cin >> in;
    int x = 0;
    int y = 0;
    int dir = 1;
    for(int i = 0; i < in.length();i++){
        if(in[i] == 'S'){
            if(dir == 1){
                x = x+1;

            }else if(dir == 2){
                y = y-1;
            }else if(dir == 3){
                x = x-1;
            }else if(dir == 4){
                y = y+1;
            }
        }else if(in[i] == 'R'){
            if(dir == 1) dir = 2;
            else if(dir == 2) dir = 3;
            else if(dir == 3) dir = 4;
            else if(dir == 4) dir = 1;
        }
    }
    cout << x << " " << y << endl;
    return;
}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}