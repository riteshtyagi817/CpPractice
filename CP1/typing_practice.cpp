/* Forming Quiz Teams, the solution for UVa 10911 above */
#include<bits/stdc++.h> // include all libraries
using namespace std;
#define LSOne(S) ((S) & -(S))  // important speedup

int N; // max N = 8
double dist[20][20], memo[1<<16]; // 1 << 16 = 2^16

double dp(int mask) { // DP state = mask
	double &ans = memo[mask]; // reference/alias
	if ( ans > -0.5 ) return ans;  // this has been computed
	if( mask == 0) return 0; // all  have been computed
	ans = 1e9; // int with as large value
	int two_pow_p1 = LSOne(mask); // speedup
	int p1  = __builtin_ctz(two_pow_p1); // p1 is first on bit
	int m  = mask-two_pow_p1; // turn off bit p1
	while(m){

		int two_pow_p2 = LSOne(m); // then try to match p1
		int p2 = __builtin_ctz(two_pow_p2); // view another on bit p2
		ans  = min(ans, dist[p1][p2] + dp(mask ^ two_pow_p1 ^ two_pow_p2));
		m -= two_pow_p2; // turn off bit p2

	}
	return ans; // memo[mask] == ans

}

int main(){


	int caseNo = 0,x[20], y[20];
	while(scanf("%d",&N),N){ // yes we can do this
		for(int i = 0;i < 2*N;++i)
			scanf("%*s %d %d",&x[1], &y[1]); // '%*s' skip names
		for(int i = 0; i < 2*N-1;++i) // build distance table
			for(int j = i+1;j < 2*N;++j)
			dist[i][j] = dist[i][j] = hypot(x[i] - x[j], y[i] - y[j]);
		for(int i = 0;i < (1 << 16);++i) memo[i] = -1.0;
		printf("case %d: %.2lf\n", ++caseNo, dp(( 1 << (2*N)) - 1));
	}
	return 0;
} // DP to solve min weighted perfect matching on small general graph


