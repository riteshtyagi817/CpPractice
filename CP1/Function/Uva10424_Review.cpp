/* Date: Tue Jul 29 22:11:42 IST 2025
User: ritesht(Ritesh Tyagi) */
#include<bits/stdc++.h>
using namespace std;
long long convert_single(long long n){

	long long sum = 0;
	while(n >= 10){
		sum += n%10;
		n /= 10;
		if(n < 10) {
		
			sum += n;
			if(sum < 10) return sum;
			else{
				n  = sum;
				sum = 0;


			}
			

		}
	}
	return n;

}
void solve(){

	string first_name;
	string second_name;
	long long num1 = 0;
	long long num2 = 0;
	long long res1 = 0;
	long long res2 = 0;
	vector<double> ans;
	
	while(getline(cin,first_name)){


		num1 = 0;
		num2 = 0;
		res1 = 0;
		res2 = 0;

		getline(cin,second_name);
		transform(first_name.begin(), first_name.end(), first_name.begin(),::tolower);
		transform(second_name.begin(), second_name.end(), second_name.begin(),::tolower);

	
		
		for(int i = 0; i < first_name.length();i++){
			if(isalpha(first_name[i])){
				num1 += first_name[i] - 'a' + 1;
			}

		}
		res1 = convert_single(num1);

		
		
		for(int i = 0; i < second_name.length();i++){
			if(isalpha(second_name[i]))
				num2 += second_name[i] - 'a' + 1;
		}
		res2 = convert_single(num2);
		if(res1 >= res2 and res1 != 0)
			ans.push_back(static_cast<double>(res2*100)/res1);
		else if(res2 >= res1 and res2 != 0)
			ans.push_back(static_cast<double>(res1*100)/res2);
		else ans.push_back(0);

		
	}
	for(const auto &val:ans) cout << fixed << setprecision(2) <<  val << " %" <<  endl;


	#if 0
	while(1){

		res1 = 0;
		res2 = 0;
		first_name.clear();
		second_name.clear();
		if(getline(cin,first_name)){

			transform(first_name.begin(), first_name.end(), first_name.begin(),::tolower);
		}else if(getline(cin,second_name)){

			transform(second_name.begin(), second_name.end(), second_name.begin(),::tolower);
		}else {

			break;
		}
		//getline(cin, second_name);
		//transform(first_name.begin(), first_name.end(), first_name.begin(),::tolower);
		//transform(second_name.begin(), second_name.end(), second_name.begin(),::tolower);
		//cout << first_name << "  " << second_name << endl;
		
		if(!first_name.empty()){
			for(int i = 0; i < first_name.length();i++){
				if(isalpha(first_name[i]))
					num1 += first_name[i] - 'b';

			}
			
			res1 = convert_single(num1);
			
		}
		if(!second_name.empty()){
			for(int i = 0; i < second_name.length();i++){
				if(isalpha(second_name[i]))
					num2 += second_name[i] - 'b';
			}
			res2 = convert_single(num2);

		}
		if(res1 != 0 and res2 != 0)
			ans.push_back(static_cast<double>(res1)/res2);

		

			

	}

	#endif

	return;

}
int main()
{
	//ios::sync_with_stdio(0);
	//cin.tie(0);cout.tie(0);
	solve();
	return 0;
}

