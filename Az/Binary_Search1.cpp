#include<bits/stdc++.h>
using namespace std;
int bs(int arr[], int n){

	int ans = -1;
	int low = 0;
	int high = n-1;
	int mid = 0;
	while(low <= high){

		mid = (low + high)/2;
		if(arr[mid] == 0){
			low = mid+1;
		}else{
			ans = mid;
			high = mid-1;

		}
		

	}
	return ans;

}
int main(){

	int arr[] = { 0,0,0,0,1,1,1,1,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << bs(arr,n) << endl;
	return 0;
}
