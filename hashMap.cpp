#include<iostream>
#include<unordered_map>
#include<string>
using std::string;
using std::unordered_map;
using std::cout;
using std::cin;
using std::endl;
void check_voter(string name,unordered_map<string,bool> &voted)
{
	if(voted.find(name) != voted.end())
	{
		cout << "You have already voted, please go outside " << endl;
	}
	else
	{
		cout << "Hey " << name << " You can vote " << endl;
		voted[name] = true;
	}
	return;

}
int main()
{
	unordered_map<string,bool> voted;
	check_voter("tom",voted);
	check_voter("ritesh",voted);
	check_voter("banti",voted);
	check_voter("ritesh",voted);


	return 0;
}
