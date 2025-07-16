#include<bits/stdc++.h>
using namespace std;
void printKthMove(int disks, int src, int target , int helper,int k){

	if(k <= ((1 << (disks-1)) -1)){
		printKthMove(disks-1, src, helper,target,k);
	}
	else if(k == (1 << (disks -1))){
		cout << src << " " << target << endl;
	}else if( k > ( 1 << (disks-1))){
		printKthMove(disks -1 , helper, target, src,k - (1 << (disks-1)));
	}

	return;

}
int main(){


	int n;
	cout << " Enter n: ";
	cin >> n;
	int k;
	cout << endl;
	cout << "Enter k: ";
	cin >> k;
	printKthMove(n,1,3,2,k);
	return 0;

}
