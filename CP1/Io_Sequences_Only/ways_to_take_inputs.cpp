#include<bits/stdc++.h>
int main(){

	// first method 
	int TC;
	scanf("%d", &TC); // number of test cases
	while(TC--){ // shortcut to repeat until 0

		int a,b; scanf("%d %d",&a, &b);
		printf("%d\n",a+b);
	}
	int a, b;
	// stop when both integers are zero
	while(scanf("%d %d",&a,&b),(a || b))
	printf("%d\n",a+b);

	
	int a, b;
	// scanf returns the number of items read
	while(scanf("%d %d",&a, &b) == 2)
	// or you can check for EOF, i.e,;
	// while (scanf("%d %d",&a,&b) != EOF)
	printf("%d\n",a+b);
	

	return 0;
}
