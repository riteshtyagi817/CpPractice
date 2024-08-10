#include<iostream>
#include<map>
using namespace std;

void displayGraph(map<string, vector<pair<string,int> > > &graph)
{
	string source = "";

	for(const auto &val:graph)
	{
		source = val.first;
		cout << source << ": ";
		cout << endl;
		for(const auto &p: val.second)
		{
			cout << p.first << "," << p.second << endl;
		}
	}

}
int main()
{
	//unordered_map<string, vector<pair<string,int> > > graph;
	map<string, vector<pair<string,int> > > graph;
	pair<string, int> p;
	int no_nodes = 0;
	cout << "Enter the no of nodes you want in the graph" << endl;
	cin >> no_nodes;
	string source = "";
	string neighbor = "";
	int nb = 0;
	int dist = 0;
	for(int i = 0; i < no_nodes;i++)
	{
		cout << "Enter the source node as the string: " ;
		cin  >> source;
		cout << "Enter the no of neighbors to this node: ";
		cin >> nb;
		if(0 == nb)
		{
			neighbor  = "none";
			dist = 0;
			graph[source].push_back({neighbor,dist});

		}
		while(nb--)
		{
			cout << "Enter the neigbour in string: ";
			cin >> neighbor;
			cout << "Enter the distance to this neighbor: " ;
			cin >> dist;
			graph[source].push_back({neighbor,dist});

		}

	}
	
	displayGraph(graph);



	return 0;
}
