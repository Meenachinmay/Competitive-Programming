/*
created : meenachinmay
*/
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int main(){
	int N; cin >> N;
	int ar[109][26]={};
	for (int i = 0; i < N; i ++){
		string s; cin >> s;
		for (int  j = 0; j < s.size(); j ++){
			ar[i][s[j]-'a']++;
		}	
	}
	int ans = 0;
	for (int i = 0; i < 26; i ++){
		int flag = 0;
		for (int j = 0; j < N; j ++){
			if(ar[j][i] == 0)flag = 1;
		}
		if(flag == 0)ans++;
	}
	cout << ans << endl;
getch();
return 0;
}
                          