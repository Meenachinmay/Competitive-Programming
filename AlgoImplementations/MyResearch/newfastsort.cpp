#include <algorithm>
#include <stack>
#include <set>
#include <queue>
#include <vector>
#include <iostream>
#include <map>
#include <functional>
#include <utility>
#include <fstream>
#include <string>
#include <numeric>
#include <bitset>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

int main() {
	vector<int> ref(1000+1);
	for (int i = 1; i <= 1000; i++) ref[i] = i;
	int n; cin >> n;
	vector<int> ar(n);
	int minn = INT_MAX;
	int maxx = INT_MIN;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		minn = min(minn, x);
		maxx = max(maxx, x);
		ar[i] = x;
	}
	ar[0] = minn;
	ar[n - 1] = maxx;
	int k = 1;
	for (int i = ref[minn+1]; i <= ref[maxx - 1]; i++) {
		if (k < ar.size() - 1) {
			ar[k] = i;
			k++;
		}
		else {
			break;
		}
	}
	for (int i = 0; i < n; i++) cout << ar[i] << endl;
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << endl;
	return 0;
}
