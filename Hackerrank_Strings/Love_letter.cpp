/*
created : meenachinmay
*/
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
int main(){
	int T; cin >> T;
	while(T--){
		string s; cin >> s;
		int i = 0,j = s.length()-1;
		int ans = 0;
		while(i <= j){
			int c = (int)s[i];
			int cc = (int)s[j];
			ans += cc - c;
			i++;j--;
		}
		cout << ans << endl;
	}
getch();
return 0;
}
                          