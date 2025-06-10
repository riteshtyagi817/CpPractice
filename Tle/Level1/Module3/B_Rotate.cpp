/* 
user - ritesht
30-05-2025
07-11-06
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){


    int n;
    cin >> n;
    int a[100][100];
    char c = '0';
    for(int i= 0; i < n;i++){
        for(int j = 0; j < n;j++){
            cin >> c ;
            if(c == '0') a[i][j] = 0;
            else a[i][j] = 1;
        }
    }
    // need to save first element and then rotate first col 
    int prev = a[0][0];
    for(int j = 0; j < n-1;j++){
        a[j][0] = a[j+1][0];
    }
    // now need to rotate last row
    for(int i = 0; i < n-1;i++){
        a[n-1][i] = a[n-1][i+1];
    }
    // now need to rotate last col from first to last 
    for(int i = n-1; i > 0;i--){
        a[i][n-1] = a[i-1][n-1];
    }
    // now need to rotate first row from left to right
    for(int j = n-1; j > 1;j--){
        a[0][j] = a[0][j-1];
    }
    a[0][1] = prev;
    


    for(int i = 0; i < n;i++){
        for(int j = 0; j  < n;j++){
            cout << a[i][j];
        }
        cout << endl;
    }
    return ;
}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}