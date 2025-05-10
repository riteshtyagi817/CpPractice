#include<bits/stdc++.h>
using namespace std;
void solve(){

    int a, b;
    cin >> a >> b;
    if(a%b == 0 or b%a == 0){
        cout << "Multiples" << endl;
    }
    else{
        cout << "No Multiples" << endl;
    }
    return;


}
int main(){


    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);cout.tie(nullptr);
    solve();


    return 0;
}