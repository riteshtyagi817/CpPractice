/* Date: Fri Apr 11 05:09:14 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int TT;
	char dummy;
	scanf("%d%c",&TT,&dummy);
	int n,k,p;
	int out;
	int count = 1;
	while(TT--){
		
		scanf("%d%d%d%c",&n,&k,&p,&dummy);
		if((k+p)%n > 0) out = (k+p)%n;
		else out = n;
		if(feof(stdin)) break;
		printf("Case %d: %d\n",count++,out);
		

	}
	return 0;
}

