#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> T(1001, 1);
	int n; cin >> n;
	vector<int> ar(n);
	for (int i = 0; i < n; i ++) cin >> ar[i];
	for (int i = 1; i < n; i ++){
		for (int j = 0; j < i; j ++){
			if (ar[j] < ar[i]){
				T[i] = max(T[i], T[j] + 1);
			}
		}
	}
	for (int i = 0; i < n; i ++) cout << T[i] << " ";
	cout << endl;
	cout << *max_element(T.begin(), T.end());
return 0;
}