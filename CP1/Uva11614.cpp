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
		i = 1;
		while(value){
			if(value < i) break;
			value -= i;
			i++;
			count++;

		}
		printf("%lld\n",count);
		count = 0;

	}

	return 0;
}
