/* 
user - ritesht
07-07-2025
05-07-00
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){




    int n;
    cin >> n;
    char a[n][n];
    for(int i = 0 ; i  < n;i++){
        for(int j = 0; j < n;j++){
            cin >> a[i][j];
           // cout << a[i][j];
        }
        //cout << endl;
    }
    int x = n/2;
    int y = n/2;
    int ans = 0;
   
    int no_ones = 0;
    if(n%2  == 1){
        y = y+1;
    }
    for(int i = 0; i < x;i++){
        for(int j = 0; j < y;j++){
            no_ones = 0;
            no_ones += a[i][j] - '0';
            no_ones += a[j][n-i-1] - '0';
            no_ones += a[n-i-1][n-j-1] -'0';
            no_ones += a[n-j-1][i] - '0';
            if(no_ones == 1 or no_ones == 3){
             ans += 1;
           }
           else if(no_ones == 2){
             ans += 2;
           }
            
        }
        
    }
    cout << ans << endl;
    
    #if 0
    int n;
    cin >> n;
    char a[n][n];
    for(int i = 0; i < n;i++){

        for(int j = 0; j < n;j++){
            cin >> a[i][j];
            
        }
       
    }
    /*
    for(int i = 0; i < n;i++){

        for(int j = 0; j < n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    } */
    int start_row = 0;
    int end_row = n-1;
    int start_col = 0;
    int end_col = n-1;
    int count1 = 0;
    int count2 = 0;
    int result = 0;
    int count3 =  0;
    int count4 = 0;
    int count_zero = 0;
    int count_one = 0;
    while(start_row <= end_row and start_col <= end_col){

        count1 = 0;
        count2 = 0;
        count3 = 0;
        count_zero =  0;
        count_one = 0;
        for(int i = 0; i < n;i++){
            /*
            if(a[i][start_col] != a[i][end_col]){
               if(a[i][start_col] == '0') count_zero++;
               else count_one++;

            }
            if(a[start_row][i] != a[end_row][i]){
                if(a[start_row][i] == '0') count_zero++;
                else count_one++;
            }
            if(a[start_row][i] != a[i][start_col]){
                if(a[start_row][i] == '0') count_zero++;
                else count_one++;

            } */
            if(a[i][start_col] == '0') count_zero++;
            else count_one++;
            if(a[i][end_col] == '0') count_zero++;
            else count_one++;
            if(a[start_row][i] == '0') count_zero++;
            else count_one++;
            if(a[end_row][i] == '0') count_zero++;
            else count_one++;
        }
        result += min(count_zero, count_one);
        start_row++;
        end_row--;
        start_col++;
        end_col--;

    }
    cout << result << endl;
   // cout << count3 << endl;
    //cout << 0 << endl;
    #endif
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