#include<bits/stdc++.h>
using namespace std;

void generate_subset(int idx,vector<int> in, vector<int> ans){
	
	if(idx == in.size()){
		for(const auto &val:ans) cout << val << " ";
		cout << endl;
		return ;
	}
	// including the idx element
	ans.push_back(in[idx]);
	generate_subset(idx+1, in,ans);
	ans.pop_back();
	// excludint the idx element
	generate_subset(idx+1, in, ans);
	return ;
}
int main(){

	vector<int> in;
	int n;
	cin >> n;
	int ele;
	for(int i = 0; i < n;i++){
		cin >> ele;
		in.push_back(ele);
	}
	vector<int> subset;
	generate_subset(0,in,subset);
	return 0;

}
