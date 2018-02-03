#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
typedef long long ll;
const int N = 10e6+1;
ll V[N];
ll len(int n){
	ll rem;
	ll ans = 0;
	while(n){
	    n /= 10;
	    ans++;
	}
	return ans;
}
bool check_palindrom(long num){
	ll rev = 0;
	ll temp = num;
	ll rem;
	while(temp>0){
		rev = (rev * 10) + temp % 10;
		temp /= 10;
	}
	if(rev == num) return true;
	else return false;
}
int cnt = 0;
void precal(){
	for (int i = 1; i <= N; i ++){
		if(check_palindrom(i)){
			if(len(i) % 2 == 0){
				V[cnt++] = i;
			}
		}
	}
}
int main(){
	ll k,p;
	cin >> k >> p;
	ll sum = 0;
	for (int i = 1; i <= k; i ++){
		ll temp = i;
		int rem = 0;
		int pw = 1;
		while(temp > 0){
			rem = (rem * 10) + temp % 10;
			temp /= 10;
			pw *= 10;
		}
		sum += i * pw + rem;
		sum %= p;
	}
	cout << sum << endl;
getch();		
return 0;
}
