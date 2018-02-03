#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 10e5;
vector<int> V[N];
bool visited[N];
ll nodes = 0;
void dfs(int v, bool visited[]){
nodes++;
visited[v] = true;
vector<int> :: iterator it;
for (it = V[v].begin(); it != V[v].end(); it ++){
	if(!visited[*it]){
		dfs(*it,visited);
	}
}
}
int main(){
ll n,m; cin >> n >> m;
if (n == 1){
puts("0");
return 0;
}
for (int i = 0; i < m; i ++){
	int u,v; cin >> u >> v;
	V[u].push_back(v);
	V[v].push_back(u);
}
ll no_of_components = 0;
ll compo[N];
for (int i = 0; i < n; i ++){
	if(!visited[i]){
		nodes = 0;
		dfs(i,visited);
		compo[no_of_components++] = nodes;
	}
}
ll N_choose_two = n*(n-1) / 2;
ll ans = 0;
for (int i = 0; i < no_of_components; i ++){
	ans += compo[i]*(compo[i]-1) / 2;
}
cout << N_choose_two - ans << endl;
return 0;
}