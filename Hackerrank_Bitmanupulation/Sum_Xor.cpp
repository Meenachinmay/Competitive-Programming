#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
#define ull unsigned long long
int main(){
	ull N; cin >> N;
	ull ans = 1;
	while(N){
		if(!(N&1)) ans *= 2;
		N >>= 1;
	}
	cout << ans << endl;
getch();
return 0;
}