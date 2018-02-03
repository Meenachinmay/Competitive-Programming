#include <bits/stdc++.h>
using namespace std;
    
const int sz = 1e5;
const long long mod = 1e9+7;
    
long long fact[sz];
    
long long _pow(int a, int b) {
    if(b == 0)
        return 1ll;
    long long ret = _pow(a, b/2);
    ret = (ret*ret) % mod;
    ret = (ret+mod)% mod;
    if(b%2 == 1)
        ret = (ret*a) % mod;
    ret = (ret+mod)% mod;
    assert(ret >= 0);
    assert(ret < mod);
    return ret;
}
    
long long inv(int a) {
    a%= mod;
    a = (a+mod)%mod;
    return _pow(a, mod-2);
}

int main()
{
    fact[0] = 1;
    for(int i = (int)1; i <= (int)sz-1; ++i) {
        fact[i] = (fact[i-1]*i) % mod;
        fact[i] = (fact[i]+mod) % mod;
    }
 	long long n,k,x; cin >> n >> k >> x;
 	unsigned long long ans = fact[k];
 	ans = (ans*inv(fact[n-2])) % mod;
 	ans = (ans + mod) % mod;	
 	ans = (ans*inv(fact[k-(n-2)])) % mod;
 	ans = (ans + mod) % mod;
 	cout << ans << endl;
    return 0;
}
    
