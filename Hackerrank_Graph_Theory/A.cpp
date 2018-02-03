#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
const int N = 10e6;
bool visited[N];
vector<int> V[N];
long nodes_in_each_component;
void dfs(int v, bool visited[]){
	nodes_in_each_component++;
	visited[v] = true;
	vector <int> :: iterator i;
	for (i = V[v].begin(); i != V[v].end(); i ++){
		if(!visited[*i]){
			dfs(*i,visited);
		}
	}
}
int main(){
	long testcases; cin >> testcases;
	while(testcases--){
	long long  nodes,edges,Libcost,Roadcost; 
	scanf("%lld%lld%lld%lld",&nodes,&edges,&Libcost,&Roadcost);
	for (int i = 1; i <= edges; i ++){
		int u,v; cin >> u >> v;
		V[u].push_back(v);
		V[v].push_back(u);
	}
	long long cost = 0;
	for (int i = 1; i <= nodes; i ++){
		if(!visited[i]){
			nodes_in_each_component = 0;
			dfs(i,visited);
			//cost += min(Libcost+(nodes_in_each_component-1)*Roadcost,Libcost*nodes_in_each_component);
		}
	}
	cout << cost << endl;
	cost = 0;
	for (int i = 1; i <= N; i ++){
		visited[i] = false;
		V[i].clear();
	}
	}
getch();
return 0;
}