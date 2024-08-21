#include<iostream>
#include<string>
#include<map>
#include<queue>
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
class Compare{
	public:
	bool operator()(pair<int,string> a, pair<int,string> b)
	{
		return a.first > b.first;
	}
};
int main()
{
	//unordered_map<string, vector<pair<string,int> > > graph;
	map<string, vector<pair<string,int> > > graph;
	pair<string, int> p;
	int no_nodes = 0;

	string sample = "6 A 2 B 5 C 2 B 2 D 4 E 2 C 2 B 8 E 7 D 2 F 3 E 6 E 1 F 1 F 0";
	cout << "below is the sample input you can copy paste this if you don't want to enter new input below\n";
	cout << sample;
	cout << endl;

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
	//string source;
	cout << "Enter the source: ";
	cin >> source;
	


	// created the visited vector
	unordered_map<string,bool>  visited;
	map<string, pair<int,string> > distTable;
	for(const auto &val:graph)
	{
		if(val.first == source)
			distTable.insert({source,{0,""}});
		else distTable.insert({val.first,{INT_MAX,""}});
	}

	priority_queue<pair<int,string>,vector<pair<int,string> >,Compare > minHeap;

	/*
	minHeap.push({98,"A"});
	minHeap.push({11,"B"});
	auto p1 = minHeap.top();
	cout << p1.first << " " << p1.second << endl;
	*/
	minHeap.push({0,source});
	distTable[source] = {0,source};

	while(!minHeap.empty())
	{
		auto p = minHeap.top();
		minHeap.pop();
		visited[p.second] = true;
		for(const auto &vec:graph[p.second]){
			if(visited.find(vec.first) == visited.end()){
				if(distTable[vec.first].first > (distTable[p.second].first + vec.second)){
						distTable[vec.first] = {(distTable[p.second].first + vec.second),p.second};
				}

			}
			minHeap.push({distTable[vec.first].first,vec.first});

		}
			

	}
	cout << "Displaying the distance table " << endl;
	cout << " the source is " << source << endl;
	for(const auto &keyPair:distTable){
		cout << keyPair.first << " distance: " << keyPair.second.first << " parent: " << keyPair.second.second << endl;

	}

	return 0;
}
