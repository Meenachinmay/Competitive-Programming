#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m; cin >> n >> m;
	string ss; cin >> ss;
	for (int i = 0; i < m; i ++){
		int x,y;
		char c1,c2;
		cin >> x >> y >> c1 >> c2;
		for (int j = x-1; j <= y-1; j ++){
			if(ss[j] == c1){
				ss[j] = c2;
			}
		}
	}
	cout << ss << endl;	
return 0;
}
