/* 
user - ritesht
04-07-2025
05-42-42
*/

#include <stdio.h>
#include <stdlib.h>

int solve(int N, int A, int B, int C, int D)
{
	if (abs(B - C) > 1) return 0;
	else if (abs(B - C) == 1) return 1;
	else if (B != 0) return 1;
	else if (A == 0 || D == 0) return 1;
	else return 0;
}

int main()
{
	int N, A, B, C, D;
	scanf("%d %d %d %d %d", &N, &A, &B, &C, &D);
	if (solve(N, A, B, C, D) != 0) printf("Yes\n");
	else printf("No\n");
	fflush(stdout);
	return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'
void solve(){
    int n, a, b , c, d;
    cin >> n >> a >> b >> c >> d;
    if(a < (n-1)/2 and d < (n-1)/2 and b <= (n-1)/2 and c <= (n-1)/2){
        cout << "Yes" << endl;
        return;
    }else cout << "No" << endl;
    return;
}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);cout.tie(nullptr);
  solve();


  return 0;
}
  */