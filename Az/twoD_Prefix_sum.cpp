#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1000; // max size for 2D array
#define endl '\n'
int A[MAXN][MAXN];
int P[MAXN][MAXN];
int P1[MAXN][MAXN];

void computePrefixSumOld(int n, int m){

	
	for(int i = 0; i < n;i++){

		P1[i][0] = A[i][0];
		for(int j = 1; j < m;j++){
			P1[i][j] = P1[i][j-1] + A[i][j];	
		}

	}

	return;

}
void computePrefixSum(int n, int m){

	for(int i = 0; i  < n;i++){
		for(int j = 0; j < m;j++){
			P[i][j] = A[i][j];
			if(i  > 0) P[i][j] += P[i-1][j];
			if(j  > 0) P[i][j] += P[i][j-1];
			if(i  > 0 and j  > 0) P[i][j] -= P[i-1][j-1];

		}

	}
	return;



}
int queryRectangleSum(int U, int L, int D, int R){

	int ans = P[D][R];
	if(L > 0) ans -= P[D][L-1];
	if(U > 0) ans -= P[U-1][R];
	if( U > 0 and L > 0) ans += P[U-1][L-1];
	return ans;
}
int queryRectangleSum1(int U, int L , int D, int R){
	
	int ans = 0;
	for(int i = U; i <= D;i++){
		if(L > 0)
		ans += P1[i][R] - P1[i][L-1];
		else ans += P1[i][R];
	}
	return ans;
	
}
int main(){

 	int n,m;
	cout << "Enter the number of rows and columns: ";
	cin >> n >> m;
	cout << "Enter the values of the 2D array:" << endl;
	
	for(int i = 0; i < n;i++){

		for(int j = 0; j < m;j++){
			cin >> A[i][j];
		}

	}
	for(int i = 0; i < n;i++){

		for(int j = 0; j < m;j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	computePrefixSumOld(n,m);	
	computePrefixSum(n,m);

	int Q;
	cout << "Enter the number of queries: " ;
	cin >> Q;
	for(int q = 0; q < Q;q++){

			int U , L, D,R;
			cout << "Enter query " << q+1 << "( U L D R:) ";
			cin >> U >> L >> D >> R;
			int result = queryRectangleSum(U,L,D,R);
			cout << " result 1 " << result << endl;
			int result1 = queryRectangleSum1(U,L,D,R);
			cout << " result 2 " << result1 << endl;

	}
	

	return 0;
}
