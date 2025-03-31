#include<bits/stdc++.h>
using namespace std;
int main(){

	int a, b , c;
	while(scanf("%d %d",&a, &b) != EOF)
		// notice the two '\n'
		printf("Case %d: %d\n\n",++c, a+b);

	int a, b , c = 0;
	while(scanf("%d %d",&a, &b) != EOF) {

		if( c > 0) printf("\n");
		printf("Case %d: %d\n",++c, a+b);
	}
	
	

	return 0;
}
