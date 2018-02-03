#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
#define ll long long int
bool checkPowtwo(ll x){
	return (x != 0) && ((x & (x-1)) == 0);
}
int countset_bits(ll n){
	int ans = 0;
	while(n){
		n &= (n-1);
		ans++;
	}                                                                          
	return ans;
}
int main(){
	int test; cin >> test;
	while(test--){
		ll N; cin >> N;
		if(countset_bits(N-1) & 1) cout << "Louise" << endl;
		else cout << "Richard" << endl; 	
	}
getch();
return 0;
}