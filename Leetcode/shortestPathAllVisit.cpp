#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
using namespace std;

class Solution {
public:
	int shortestPathLength(vector<vector<int>>& graph) {
		int n = graph.size();
		vector< vector<int> > visited(n, vector<int>(1 << n));
		queue< pair<int, int> > q;
		int steps = 0;
		int finalans = (1 << n) - 1;
		for (int i = 0; i < graph.size(); i++) {
			q.push({ i, 1 << i });
		}

		while (!q.empty()) {
			int s = q.size();
			while (s--) {
				auto p = q.front();
				q.pop();
				int node = p.first;
				int state = p.second;
				if (state == finalans) return steps;
				if (visited[node][state]) continue;
				visited[node][state] = 1;
				for (int next : graph[node]) {
					q.push({ next, state | 1 << next });
				}
			}
			steps++;
		}
		return -1;
	}
};

int main() {
	cin.get(); cin.get();
	return 0;
}