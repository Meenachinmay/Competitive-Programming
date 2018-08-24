#include <bits/stdc++.h>
using namespace std;

const int N = 10e5;
vector<pair<int,int > > g[N];
#define pb push_back
#define mp make_pair
int main(){
	int v, e; cin >> v >> e;
	for (int i = 1; i <= e; i ++){
		int u, v, w; cin >> u >> v >> w;
		g[u].pb(mp(v,w));
		g[v].pb(mp(u,w));
	}
	vector<pair<int, int> >::iterator it;
	for (int i = 1; i <= v; i ++){
		for (it = g[i].begin(); it != g[i].end(); it ++){
			cout << i << " " << it->first << " " << it->second << endl;
		}
	}
cerr << "Time taken: " << 1.0 * clock() / CLOCKS_PER_SEC << "ms" << endl;
return 0;
}