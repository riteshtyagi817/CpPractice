#include<bits/stdc++.h>
using namespace std;
int main(){

	while(1) { // keep looping
		int ans = 0, v;
		char dummy;
		while(scanf("%d%c",&v, &dummy) != EOF) {

			ans += v;
			if( dummy == '\n') break; // test EOLN

		}
		if(feof(stdin)) break; // test EOF
		printf("%d\n",ans);
	}
	return 0;
}
