/* Date: Thu Apr 24 22:16:00 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	float in;
	//char dummy;
	int result = 0;
	cin >> in;
	result = round(in*1000*(static_cast<float>(5280)/4854));
	cout << result << endl;
	/*while(1){

	
		while(scanf("%f%c",&in, &dummy) != EOF){
			result  = round(in*1000*((float)5280/4854));	
			printf("%d\n",result);
			
		}

		if(feof(stdin)) break;

	} */
	return 0;
}

