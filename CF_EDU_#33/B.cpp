#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n; cin >> n;
    ll ans = 0;
    for (int i = 1; i <= 10; i ++){
        ll res = ((1LL<<i)-1) * ((1LL)<<(i-1));
        if(n % res == 0) ans = res;
    }
    cout << ans << endl;
    return 0;
}