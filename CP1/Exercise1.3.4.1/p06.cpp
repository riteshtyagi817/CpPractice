#include<bits/stdc++.h>
using namespace std;
bool binary_search(vector<int> &list, int val){

	int start = 0;
	int end = list.size()-1;
	int mid = 0;
	while(start <= end){

		mid = (start+end)/2;
		if(list[mid] == val){
			return true;

		}else if(list[mid] > val){
			end = mid-1;	
		}
		else{
			start = mid+1;

		}


	}
	return false;

}
int main(){

	int size;
	cout << "Enter the size of the list: ";
	cin >> size;
	cout << "Enter the elements one by one: ";
	vector<int> list;

	int ele;
	int val;
	for(int i  =0; i < size;i++){
		cin >> ele;
		list.emplace_back(ele);

	}
	sort(list.begin(),list.end());
	cout << "Enter the value to search: ";
	cin >> val;
	if(binary_search(list,val)){
	// stl binary  search also will work
	//if(binary_search(list.begin(), list.end(),val)){
		cout << val << " exists " << endl;
	}
	else{
		cout << val << " not exists " << endl;
	}

	return 0;
}
