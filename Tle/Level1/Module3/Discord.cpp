/* 
user - ritesht
02-06-2025
10-52-26
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){

     int count = 0;
    int col, row;
    cin >> col >> row;
    int a[row][col];
    for(int i = 0; i < row;i++){
        for(int j = 0; j < col;j++){
            cin >> a[i][j];
            a[i][j]--;
        }
    }
    for(int i = 0; i < col;i++){
        int arr[col];
        memset(arr, 0, sizeof(arr));
        arr[i] = 1;
        for(int  m = 0;  m< row;m++){
            for(int j = 0; j < col;j++){
                if(a[m][j] == i){
                    
                if(j > 0 and j < col-1){
                    arr[a[m][j-1]] = 1;
                    arr[a[m][j+1]] = 1;

                }
                else if( j > 0){
                    arr[a[m][j-1]] = 1;
                }
                else if(j < col-1){
                    arr[a[m][j+1]] = 1;
                }
            }
            }
        }
        for(int k = 0; k < col;k++){
           
            if(arr[k] == 0) count++;
        }
    }


    cout << (count/2) << endl;



    return;
}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}