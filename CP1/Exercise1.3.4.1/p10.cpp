#include<bits/stdc++.h>
using namespace std;
bool valid_word(string word){
	if(word.length() != 3) return false;
	if((word[0] < 'a') or (word[0] > 'z')) return false;
	else if((word[1] < 'a') or (word[1] > 'z')) return false;
	else if((word[2] < '0') or  (word[2] > '9')) return false;
	return true;
}
int main(){


	string input = "line: a70 and z72 will be replaced, aa24 and a872 will not";
	string out;
	stringstream ss(input);
	string word;
	while(ss >> word){
		cout << word << endl;
		if(valid_word(word)){
			out += " ";
			out += "***";
		}
		else{
			out += " ";
			out += word;
		}

	}
	cout << out << endl;
	return 0;
}
