/* 
user - ritesht
28-06-2025
04-39-35
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
long long cal(int num){
    long long count = 0;
    for(int i = 1; i <= sqrt(num);i++){
        if(num%i == 0) 
        {
            count++;
             if((num / i) != i) count++;
        }
       
    }
    return count;

}
void solve(){
    int n;
    cin >> n;
    long long ele = 0;
    long long result = 0;

    while(n--){

        cin >> ele;
        result = cal(ele);
        cout << result << endl;
        
    }
    return;
}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}