/* 
user - ritesht
29-05-2025
07-12-59
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
bool isDistinct(int y){
    int a[4];
    int i = 0;
    while(y){

        a[i++] = y%10;
        y /= 10;
    }
    for(int i = 0; i < 4;i++){
           int val  = a[i];
           int count = 1;
           for(int j = 0; j < 4;j++){
            if(i != j){
                if(val == a[j]){
                    return false;
                }
            }
           }

    }
    return true;

}
void solve(){

    int y;
    cin >> y;
    y++;
    while(1){
        if(isDistinct(y)){
            cout << y << endl;
            break;
        }
        y++;


    }
    return;

}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}