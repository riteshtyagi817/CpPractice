/* 
user - ritesht
27-07-2025
12-08-23
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){
    int n;
    cin >> n;
    int in[n];
    int steps = INT_MAX;
    for(int i = 0; i < n;i++) cin >> in[i];
    int no_odd = 0;
    int min_odd = INT_MAX;
    int min_even = INT_MAX;
    int no_even = 0;
    for(int i = 0; i < n;i++){
        if(in[i] % 2 != 0){
            no_odd++;
            min_odd = min(in[i], min_odd);
        }else {
            min_even = min(in[i], min_even);
            no_even++;
        }
    }
    
    int value = min(min_odd, min_even);
    if(no_odd % 2 != 0){
    /*
       if(value %2 != 0){
        while(value % 2 != 0){
            value /= 2;
            steps++;
        }

       }else {
        while(value % 2 == 0){
            value /= 2;
            steps++;
        }

       }
       */
      int count = 0;
       for(int i = 0; i  < n;i++){
        count = 0;
        if(in[i] % 2 != 0){
            while(in[i] % 2 != 0){
                in[i] /= 2;
                count++;
                
            }
            steps = min(steps, count);


        }else{
             while(in[i] % 2 == 0){
                in[i] /= 2;
                count++;
                
            }
            steps = min(steps, count);



        }
       }



    }
    else steps = 0;
    cout << steps << endl;
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