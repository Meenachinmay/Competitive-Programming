#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long int ulli;
typedef long long int lli;
#define FOR(n) for (int i = 0; i < (int)(n); i++)
#define sz(a) int((a).size())
#define pb(a) push_back(a)
#define pbb(a) pop_back(a)
#define si set<int>
#define sl set<long>
#define sc set<char>
#define pii pair<int, int>
#define pll pair<long, long>
#define pdd pair<double, double>
#define TC(t) while (t--)
#define WM(a) while (a--)
#define WP(a) while (a++)
#define print(data) cout << data << endl
#define tin(a) cin >> a
#define ttin(a, b) cin >> a >> b
#define tttin(a, b, c) cin >> a >> b >> c
#define maxheap(a) make_heap(a.begin(), a.end())
#define fixp(a) cout << fixed << setprecision(a);
#define RM(a, n) a.erase(remove(a.begin(), a.end(), n), a.end())
#define MOD 1000000007
ll prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
//ASCII value from 0 to 9 :: 48 to 57
inline int gmx(int a, int b)
{
    return a > b ? a : b;
}
inline int gmm(int a, int b)
{
    return a < b ? a : b;
}
inline ll get_gcd(ll a, ll b)
{
    ll rem = 0;
    while (b != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
ll fastexp(ll base, ll exp)
{
    ll res = 1;
    if (exp == 0)
        return 1LL;
    while (exp)
    {
        if (exp & 1)
            res = (res * base) % MOD;
        res = (res + MOD) % MOD;
        base = (base * base) % MOD;
        base = (base + MOD) % MOD;
        exp >>= 1;
    }
    return (ll)res;
}
ll fact(ll n)
{
    ll ans = 1;
    for (ll i = 1; i <= n; i++)
    {
        ans = (ans * i) % MOD;
    }
    return ans;
}
struct compare
{
    bool operator()(const std::string &first, const std::string &second)
    {
        return first.size() < second.size();
    }
};
void Verdict_Check()
{
    ifstream A("my_output.txt");
    ifstream B("code_output.txt");

    int c1 = 0, c2 = 0;
    bool WA = false;
    string str;
    while (getline(A, str))
    {
        c1++;
    }
    while (getline(B, str))
    {
        c2++;
    }
    A.close();
    B.close();
    ifstream AA("my_output.txt");
    ifstream BB("code_output.txt");
    if (c1 != c2)
    {
        WA = true;
    }
    else
    {
        string s, ss;
        while (getline(AA, s) && getline(BB, ss))
        {
            if (s != ss)
            {
                WA = true;
            }
        }
    }
    if (WA)
    {
        cout << "Wrong answer!!!" << endl;
    }
    else
    {
        cout << "All test cases are passed!!!" << endl;
    }
    AA.close();
    BB.close();
}
//Convert NumberString to Integer Number
inline ll StringToInt(string a)
{
    char x[100];
    ll res;
    strcpy(x, a.c_str());
    sscanf(x, "%lld", &res);
    return (ll)res;
}
inline string IntToString(ll a)
{
    char x[100];
    sprintf(x, "%lld", a);
    string s = x;
    return s;
}
int weight[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
int weightofaletter(char ch)
{
    int ans = weight[ch - 'a'];
    return ans;
}
inline ulli conbinary(int n)
{
    ll ans = 0;
    ll rem, i = 1;
    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        ans += rem * i;
        i *= 10;
    }
    return (ulli)ans;
}

int main()
{
    ll n, m, k;
    tttin(n, m, k);
    ll t = n + m;
    if (k == -1 and t & 1LL)
    {
        puts("0");
        return 0;
    }
    cout << fastexp(fastexp(2LL, n - 1), m - 1);
    // freopen("a.in","r",stdin);
    // freopen("a.out","w", stdout);
    //freopen("CON", "w", stdout);
    //Verdict_Check();
    // printf("Time taken: %.7fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}