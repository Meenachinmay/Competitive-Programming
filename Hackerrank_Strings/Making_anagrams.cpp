/*                  
created : meenachinmay
*/
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
int main(){
	string s,ss; cin >> s >> ss;
	int c1[26]={};
	int c2[26]={};
	for (int i = 0; i < s.size(); i ++) c1[s[i]-97]++;
	for (int i = 0; i < ss.size(); i ++) c2[ss[i]-97]++;
	int ans = 0;
	for (int i = 0; i < 26;i ++){
		ans += abs(c1[i] - c2[i]);
	}
	cout << ans << endl;
	getch();
return 0;
}
                       
