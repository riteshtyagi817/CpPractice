#include<bits/stdc++.h>
int main(){
	
	
	int TT;
	long long value = 0;
	char dummy;
	long long  count = 0;
	long long i = 1;
	scanf("%d%c",&TT,&dummy);
	while(TT--){

		scanf("%lld%c",&value, &dummy);
		// tricky to think
		count = ((int)sqrt(8*value + 1) - 1) / 2;
		printf("%lld\n",count);
		count = 0;

	}

	return 0;
}
