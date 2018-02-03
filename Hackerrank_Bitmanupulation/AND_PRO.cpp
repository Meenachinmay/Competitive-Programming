/*
 Created By : Meenachinmay
*/
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
typedef long long ll;
int msbPos(ll num){
	int ans = -1;
	while(num){
		num >>=1;
		ans++;
	}
return ans;
}
int main(){
	int test; cin >> test;
	while(test--){
		ll X,Y; cin >> X >> Y;
		int res = 0;
		while(X && Y){
			int msb_posX = msbPos(X);
			int msb_posY = msbPos(Y);
			if (msb_posX != msb_posY){
				break;
			}
			int temp = 1 << msb_posX;
			res += temp;
			cerr << res << " ";
			X -= msb_posX;
			Y -= msb_posY;
		}
		cout << res << endl;
	}
getch();
return 0;
}
