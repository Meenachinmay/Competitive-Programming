#include <bits/stdc++.h>

using namespace std;
//XOR values from 1 to N but for this case only
//for normal case
/*
long long X(long N){
	int R[4] = {N,1,N+1,0};
	return (long long)R[N&4];
}*/ 	

long long X(long long N){
	 long long R[8] = {N,N,2,2,N+2,N+2,0,0};
	 return R[N%8];	 
}
int main(){
	long test; cin >> test;
	while(test--){
		long long L,R; cin >> L >> R;
		long long ans = X(R+1);
		ans = X(ans) ^ X(L-1);
		cout << ans << endl;
	}

return 0;
}
