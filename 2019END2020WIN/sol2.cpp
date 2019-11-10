#include <bits/stdc++.h>
#include <sstream>
#include <conio.h>
using namespace std;

void print_vector(vector<int> a){
	for (int i = 0; i < a.size(); i ++){
		cout << a[i] << " ";
	}
	cout << endl;
}

int main (){

	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int j = 0; j < n; ++j) {
			cin >> a[j];
			--a[j];
		}
		for (int i = 0; i < a.size(); i ++) cout << a[i] << endl;
		int pos = 0;
		while (pos < n) {
			int nxt = min_element(a.begin() + pos, a.end()) - a.begin();
			cout << "nxt " << nxt << endl;
			int el = a[nxt];
			cout << "el " << el << endl;
			cout << "pos " << pos << endl;
			a.erase(a.begin() + nxt);
			print_vector(a);
			a.insert(a.begin() + pos, el);
			print_vector(a);			
			if (pos == nxt) pos = nxt + 1;
			else pos = nxt;
		}
	}
	getch();
	return 0;
}
