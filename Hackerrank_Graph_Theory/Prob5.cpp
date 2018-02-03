#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
const int M = 10e5;
bool visited[M];
vector<int> V[M];
int mindist[M];
void BFS(int s){
	list<int> Q;
	visited[s] = true;
	mindist[s] = 0;
	Q.push_back(s);
	vector<int> :: iterator it;
	while(!Q.empty()){
		int v = Q.front();
		Q.pop_back();
		for(it = V[v].begin(); it != V[v].end(); it ++){
			if(!visited[*it]){
				visited[*it] = true;
				//taking the distances into the array
				mindist[*it] = mindist[v]+6;
				Q.push_back(*it);
			}
		}	
	}
}
int main(){
	freopen("a.in","r",stdin);
	int test; cin >> test;
	while(test--){
		int nodes,edges; cin >> nodes >> edges;
		memset(visited,false,sizeof(visited));
		memset(mindist,0,sizeof(mindist));
		for (int i = 1; i <= M; i ++){
			V[i].clear();
		}
		for (int i = 0; i < edges; i ++){
			int u,v; cin >> v >> u;
			V[u].push_back(v);
			V[v].push_back(u);
		}
		int source_node; cin >> source_node;
		BFS(source_node);
		for (int i = 1; i <= nodes; i ++){
			if(source_node != i){
				if(mindist[i] == 0) cout << "-1" << " ";
				else cout << mindist[i] << " ";
			}
		}
		cout << endl;	
	}
getch();
return 0;
}