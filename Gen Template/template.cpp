#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;
typedef float fl;
typedef unsigned int ui;
typedef unsigned long long int ulli;

#define 	vi 								vector<int>
#define 	vl 								vector<ll>
#define 	pii 							pair<int,int>
#define 	pll 							pair<ll, ll>
#define 	vpi 							vector<pair<int, int> >
#define 	mii 							map<int,int>
#define 	msi 							map<string, int>
#define 	mci 							map<char, int>
#define 	mll 							map<ll, ll>
#define 	si								set<int>
#define 	sl								set<ll>
#define 	inS(x)						scanf("%s", (x))
#define 	INS(x)						scanf("%s", (x) + 1)
#define 	in(x)							scanf("%d", &(x))
#define 	in2(x,y)					scanf("%d%d",&(x), &(y))
#define 	in3(x,y,z)				scanf("%d%d%d", &(x), &(y), &(z))
#define 	inl(x)						scanf("%ld", &(x))
#define 	inll(x)						scanf("%lld", &(x))
#define 	in2ll(x,y)				scanf("%lld%lld",&(x), &(y))
#define 	in3ll(x,y,z)			scanf("%lld%lld%lld", &(x), &(y), &(z))
#define 	forn(n)						for(int i = 0; i < (n); i ++)
#define 	FORN(n)						for(int i = 1; i <= (n); i ++)
#define 	TC(x)							while(x--)
#define		printi(x)					printf("%d\n", (x))
#define 	printL(x)					printf("%lld\n", (x))
#define 	print2(x,y)				printf("%d %d\n", (x), (y))
#define 	prints(str)				printf("%s\n", (str)) 	
#define		printc(c)					printf("%c", (c))
#define 	ssz(x)						(x).length()
#define 	sszC(x)						strlen(x)
const int MOD = 1e9+7;
inline bool ispow2(int x){ return (x != 0 && (x&(x - 1)) == 0); }
inline int cntBits(int x){ return __builtin_popcount(x); }

inline int maxi(int a, int b) { return a > b ? a : b; }
inline int maxll(ll a, ll b) { return a > b ? a : b; }

inline int minI(int a, int b) { return a < b ? a : b; }
inline int minll(ll a, ll b) { return a < b ? a : b; }

inline int cntBitslong(ll x){ return __builtin_popcountll(x); }
inline int gcdi(int a, int b) { while (b) { int t = a % b; a = b; b = t; } return a; }

inline ll gcdll(ll a, ll b) { while (b) { ll t = a % b; a = b; b = t; } return a; }

inline int nextint() { int x; scanf("%d", &x); return x; }
inline long nextlong() { long x; scanf("%ld", &x); return x; }
inline ll nextlong2() { ll x; scanf("%lld", &x); return x; }

inline char *line(int size, int mode) { if (mode == 0){
		char *str = new char[size];
		scanf("%s", str); return str; }else if( mode == 1){ char *str = new char[size]; scanf("%s", str+1); return str; } }

template<class T, class TT> void addfast(T &x, TT y) { x += y; if (x >= MOD) x -= MOD; }
template<class T, class TT> void subfast(T &x, TT y) { x -= y; if (x < 0) x += MOD; }

inline int lcmi(int a, int b) { return a / gcdi(a, b) * b; }
inline ll lcmll(ll a, ll b) { return a / gcdll(a, b) * b; }

inline int gcdi3(int a, int b, int c) { return gcdi(gcdi(a,b), c); }
inline int gcdll3(ll a, ll b, ll c) { return gcdll(gcdll(a,b), c); }

inline int ToInt(string s) { char x[100]; int res; strcpy(x, s.c_str()); sscanf(x, "%d", &res); return res; }
inline ll ToLong(string s) { char x[100]; ll res; strcpy(x, s.c_str()); sscanf(x, "%lld", &res); return res; }

inline string ToString(int a) { char x[100]; sprintf(x, "%d", a); string s = x; return s; }
inline string ToStringll(ll a) { char x[100]; sprintf(x, "%lld", a); string s = x; return s; }
template<class T> bool isprime(T x) { if (x <= 4 || x % 2 == 0 || x % 3 == 0) return x == 2 || x == 3;
	for (T i = 5; i * i <= x; i += 6) if (x % i == 0 || x % (i + 2) == 0) return 0; return 1; }
	
struct CompareSecond { bool operator()(const pair<int,int>& left, const pair<int,int>& right)const { return left.second < right.second; } };
struct CompareFirst { bool operator()(const pair<int,int>& left, const pair<int,int>& right)const { return left.first < right.first; } };   	

void vecin(vector<int>& ar, int n, int t){
	assert(t >= 0 && t <= 1);
	if (t == 0) { forn(n) { in(ar[i]); } } else { FORN(n) { in(ar[i]); } } }

void arin(int ar[], int n, int t){
	assert(t >= 0 && t <= 1); if (t == 0) { forn(n) { in(ar[i]); } } else { FORN(n) { in(ar[i]); } } }

void printV(vector<int>& ar, int t){
	assert(t >= 0 && t <= 1); if (t == 0) { forn(ar.size()) { printf("%d ", ar[i]); } } else{ FORN(ar.size()) { printf("%d ", ar[i]); } } }

void printA(int ar[], int n, int t){
	assert(t >= 0 && t <= 1); if (t == 0) { forn(n) { printf("%d ", ar[i]); } } else{ FORN(n) { printf("%d ", ar[i]); } } }

ll bigpow(ll base, ll y, int mod = MOD){
	if (base == 0) return y;
	if (y == 0) return base;
	ll res = 1; while (y > 0){ if (y & 1) res = (res * base) % mod; base = (base * base) % mod; y >>= 1; } return (res) % mod;	}
//#############################################################################################################################

void fastIO(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
}

int main(void){
	fastIO();	

	cerr << "Time Taken: " << 1.0 * clock() / CLOCKS_PER_SEC << endl;	
	return 0;
}
