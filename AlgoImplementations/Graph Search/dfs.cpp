#include <bits/stdc++.h>
using namespace std;
const int N = 10e5;
bool seen[N];
vector<int> nodes[N];
void dfs(int node){
	seen[node] = true;
	cout << node << endl;
	vector<int>::iterator it;
	for (it = nodes[node].begin(); it != nodes[node].end(); it ++){
		if (!seen[*it]){
			dfs(*it);
		}
	}
}

int main(){
	int v, e; cin >> v >> e;
	for (int i = 1; i <= e; i ++){
		int u, v; cin >> u >> v;
		nodes[u].push_back(v);
		nodes[v].push_back(u);
	}
	dfs(1);
cerr << "Time taken: " << 1.0 * clock() / CLOCKS_PER_SEC << endl;
return 0;
}