/* Date: Sat Jun 14 14:06:29 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){

	/* really don't have much idea about this solution */
	/*
 	* let n be the equal point, then
 	* yn + x = n => n(y-1) = -x => n = x / (1 - y)
 	*/
	int x, y;
	while(scanf("%d%d",&x,&y) != EOF){
		if(x == 0 && y == 0) printf("ALL GOOD\n");
		else if(y == 1) printf("IMPOSSIBLE\n");
		else{
			printf("%.6f\n", x / (1.0 - y));
		}

	}
	return;

}
int main()
{
	//ios::sync_with_stdio(0);
	//cin.tie(0);cout.tie(0);
	solve();
	return 0;
}

