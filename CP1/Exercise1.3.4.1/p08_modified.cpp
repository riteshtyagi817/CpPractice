#include<bits/stdc++.h>
using namespace std;
#define LSOne(S) ((S) & (-S))
// very clever approach but I am not familiar as of now
int main(){

	int N = 20;
	for(int i = 0; i < (1 << N);++i){
		int pos = i;
		while(pos){
			int ls = LSOne(pos);
			pos -= ls;
			printf("%d ",__builtin_ctz(ls));
		
		}
		printf("\n");

	}


	return 0;

}
