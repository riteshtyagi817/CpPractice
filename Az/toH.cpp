#include<bits/stdc++.h>
using namespace std;
void f(int disk,int from,int x, int to){

	if(disk == 0)return ;
	f(disk-1,from,to,x);
	cout << from << " " << to << endl;
	f(disk-1,x,from,to);

	return;
	
}
int main(){

	int disk;
	cin >> disk;
	f(disk,1,2,3);

	return 0 ;
}
