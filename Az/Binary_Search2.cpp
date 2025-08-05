/* implementation of lower bound */

#include<bits/stdc++.h>
using namespace std;
bool check(int arr[], int idx, int ele){

	return arr[idx] >= ele;	
	
}
int bs(int arr[], int n,int ele){

	int ans = -1;
	int low = 0;
	int high = n-1;
	int mid = 0;
	while(low <= high){

		mid = (low + high)/2;
		if(check(arr,mid,ele) == 0){
			low = mid+1;
		}else{
			ans = mid;
			high = mid-1;

		}
		

	}
	return ans;

}
int main(){

	int arr[] = {2,3,5,7,7,7,8,52,99};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(const auto &val:arr) cout << val <<  " ";
	cout << endl;
	int ele;
	cin >> ele;
	cout << bs(arr,n,ele) << endl;
	return 0;
}
