#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   int n; cin >> n;
	int a = 1;
	int b = 2;
	int c = 3;
	for (int i = 0; i < n; i ++){
		int x; cin >> x;
		if(x == c){
			puts("NO");
			return 0;
		}
		if(x == a){
			swap(b,c);
		}else{
			swap(a,c);
		}
	}
	puts("YES");
    return 0;
}