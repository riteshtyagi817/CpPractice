/* 
user - ritesht
31-05-2025
18-12-48
*/
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){

    int h;
    int w ;
    cin >> h >> w;
    char a[h][w];
    char b[h][w];
    char c;
    for(int i =0; i < h;i++){
        for(int j  = 0; j < w;j++){
            cin >> c;
            a[i][j] = c;
        }
    }
     for(int i =0; i < h;i++){
        for(int j  = 0; j < w;j++){
            cin >> c;
            b[i][j] = c;
        }
    }
      bool done = true;
    for(int s = 0; s < h;s++){

        for(int t = 0; t < w;t++){
            done = true;
            for(int i  = 0; i < h;i++){
                for(int j = 0; j < w;j++){
                    if(a[i][j] != b[(i+s)%h][(j+t)%w]){
                        done = false;
                        break;
                    }
                }
                if(!done) break;
            }
            if(done) {
                cout << "Yes" << endl;
                return;
            }

        }

    }
    cout << "No" << endl;

}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}