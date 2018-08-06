#include <bits/stdc++.h>
using namespace std;
int ar[100005];
int main(){
	int n; cin >> n;
	for (int i = 0; i < n; i ++) cin >> ar[i];
	int dp[n];
	dp[0] = ar[0];
	for (int i = 1; i < n; i ++){
		if (i == 1) dp[i] = max(dp[i-1], ar[i]);
		else dp[i] = max(dp[i-1], dp[i-2]+ar[i]);
		//if (n%2 != 0 && i == n-1) ans += ans + ar[i];
	}
	cout << dp[n-1] << endl;
cin.get(); cin.get();
return 0;
}