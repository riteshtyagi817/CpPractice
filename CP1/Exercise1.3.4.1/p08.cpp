#include<bits/stdc++.h>
using namespace std;
void generate_subset(vector<int> store, int index, vector<vector<int>> &out,vector<int>temp)
{
	if(index == store.size()){
		out.push_back(temp);
		temp.clear();
		return ;
	}
	auto c = store[index];
	temp.push_back(c);
	generate_subset(store,index+1,out,temp);
	temp.pop_back();
	generate_subset(store,index+1,out,temp);



}
int main(){

	vector<int> store = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int index = 0;
	vector<vector<int>> out;
	vector<int> temp;
	generate_subset(store,index, out,temp);

	int count = 0;
	for(auto val:out){
		count++;
		for(auto ele:val){
			cout << ele << " ";
		}
		cout << endl;
	}
	cout << "total subsets  " << count << endl;

	return 0;
}
