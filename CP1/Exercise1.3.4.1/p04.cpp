#include<bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin >> n;
	int val;
	set<int> store;
	while(n--){
		cin >> val;
		if(store.find(val) == store.end()){
			store.insert(val);
		}

	}
	for(auto val:store){

		cout << val << " ";
	}


	return 0;
}
