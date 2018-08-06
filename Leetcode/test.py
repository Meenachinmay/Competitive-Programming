import math

mod = 1000000007
def GCD(x, y):
    rem = 0
    if x == 0:
        return y
    if y == 0:
        return x
    if x == 1:
        return 1
    if y == 1:
        return 1
    while y != 0:
        rem = x%y
        x = y
        y = rem
    return x%mod

def fastexp(base, exp):
    res = 1
    if exp == 0:
        return 1
    while exp > 0:
        if ((exp&1) == 1):
            res = (res*base)%mod;
        base = (base*base)%mod;
        exp >>= 1
    return res%mod

t = (int)(input())

while t > 0:
    a,b,c = map(int, input().split())
    # if a > mod:
    #     a %= mod
    # if b > mod:
    #     b %= mod
    # if c > mod:
    #     c %= mod
    
    sumab = (int)((fastexp(a,c) + fastexp(b,c)))
    diffab = abs(a-b)
    if diffab > mod:
        diffab = diffab % mod
    print(GCD(sumab, diffab))
    t -= 1
