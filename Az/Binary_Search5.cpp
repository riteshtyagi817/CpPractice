/* peak in bitonic array */

#include<bits/stdc++.h>
using namespace std;
bool check(int arr[], int idx,int n){

	if(idx == n-1) return 1;
	return arr[idx] > arr[idx+1];
	
}
int bs(int arr[], int n){

	int ans = -1;
	int low = 0;
	int high = n-1;
	int mid = 0;
	while(low <= high){

		mid = (low + high)/2;
		if(check(arr,mid,n) == 0){
			low = mid+1;
		}else{
			ans = mid;
			high = mid-1;

		}
		

	}
	return ans;

}
int main(){

	int arr[] = {1,3,5,10,11,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(const auto &val:arr) cout << val <<  " ";
	cout << endl;
	cout << bs(arr,n) << endl;
	return 0;
}
