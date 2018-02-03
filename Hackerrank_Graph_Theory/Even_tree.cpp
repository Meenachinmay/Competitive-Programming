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
	freopen("a.in","r",stdin);
	long testcases; cin >> testcases;
	while(testcases--){
	long long  nodes,edges; 
	scanf("%lld%lld",&nodes,&edges);
	for (int i = 1; i <= edges; i ++){
		int u,v; cin >> u >> v;
		V[u].push_back(v);
		V[v].push_back(u);
	}
	long long ans = 0;
	for (int i = 1; i <= nodes; i ++){
		if(!visited[i]){
			nodes_in_each_component = 0;
			dfs(i,visited);
		}
	}
	cout << ans+1 << endl;
	ans = 0;
	for (int i = 1; i <= N; i ++){
		visited[i] = false;
		V[i].clear();
	}
	}
getch();
return 0;
}