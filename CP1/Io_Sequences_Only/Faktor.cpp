/* Date: Fri Apr 18 15:10:31 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a,i;
	char dummy;
	while(scanf("%d%d%c",&a,&i,&dummy) != EOF){
	
		if(feof(stdin)) break;
		printf("%d\n",a*(i-1)+1);

	}
	return 0;
}

