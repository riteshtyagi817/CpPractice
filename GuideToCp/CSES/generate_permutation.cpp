#include<bits/stdc++.h>
using namespace std;

void generate_permutation(vector<int> perm, vector<bool> &chosen,int n){

	if(n == perm.size()){
		for(const auto &val:perm) cout << val << " ";
		cout << endl;
		return;
	}
	for(int i = 1; i <= n;i++){

		if(chosen[i]) continue;
		chosen[i] = true;
		perm.push_back(i);
		generate_permutation(perm, chosen, n);
		chosen[i] = false;
		perm.pop_back();
	}



	return;

}

int main(){

	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	vector<bool> chosen(n+1, false);
	vector<int> perm;
	generate_permutation(perm, chosen,n);

	return 0;
}

