class dsu {
public:
	int* rank;int* parent;
	int n;
	
	dsu(int n) {
		this->n = n;
		rank = new int[n];
		parent = new int[n];
		makeset();
	}

	void makeset() {
		for (int i = 1; i <= n; i++){
			parent[i] = i;
		}
	}

	int find(int x) {
		if (parent[x] != x) {
			parent[x] = find(parent[x]);
		}
		return parent[x];
	}

	void unite(int x, int y) {
		int xroot = find(x), yroot = find(y);
		if (xroot == yroot) {
			return;
		}
		if (rank[xroot] < rank[yroot]) {
			parent[xroot] = yroot;
		}
		else if (rank[yroot] < rank[xroot]) {
			parent[yroot] = xroot;
		}
		else {
			parent[yroot] = xroot;
			rank[xroot] = rank[xroot] + 1;
		}
	}
};