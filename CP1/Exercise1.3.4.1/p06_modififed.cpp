#include<bits/stdc++.h>
using namespace std;
int main(){

	int n = 5, L[] = {10,8,6,7,30},v = 7;
	sort(L,L+n);
	printf("%d\n",binary_search(L,L+n,v));
	return 0;

	
}
