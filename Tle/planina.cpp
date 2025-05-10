/* Date: Mon Apr 21 22:56:28 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int in;
    char dummy;
    while(1){

        while(scanf("%d%c",&in, &dummy) != EOF){
            
            if(dummy == '\n') break;

        }

        if(feof(stdin)) break;
        int val = pow(2,in) + 1;

        printf("%.0f\n",pow(val,2));
    }
    return 0;
}
