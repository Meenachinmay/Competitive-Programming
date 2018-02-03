#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
const int N = 10e6;
bool visited[N];
stack<int> S;
vector<int> V[N];
//topo sort method
void topological_sorting(int x, bool visited[], stack<int>& S){
	visited[x] = true;
	vector<int>::iterator it;
	for (it = V[x].begin(); it != V[x].end(); it ++){
		if(!visited[*it]){
			topological_sorting(*it,visited,S);
		}
	}
	S.push(x);
}
int main(){
	//input
	int vertices; cin >> vertices;
	for (int i = 0; i < vertices; i ++){
		int u,v; cin >> u >> v;
		V[u].push_back(v);
	}
	//doing topo sort
	for (int i = 0; i < vertices; i ++){
		if(!visited[i]){
			topological_sorting(i,visited,S);
		}                                                      
	}
	//printing result
	while(!S.empty()){
		cout << S.top() << " ";
		S.pop();
	}
getch();
return 0;
}