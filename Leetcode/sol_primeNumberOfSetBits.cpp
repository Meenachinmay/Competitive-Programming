#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long int ulli;
typedef long long int lli;
#define pb(a) push_back(a)
#define pbb(a) pop_back(a)  
#define forn(a,b) for (int i = (int)(a); i < (int)b; i ++)
#define si set<int>
#define sl set<long>
#define sc set<char>
#define pii pair<int, int>
#define pll pair<long, long>
#define pdd pair<double, double>
#define TC(t) while(t--)
#define WM(a) while(a--)
#define WP(a) while(a++)
#define print(data) cout << data << endl
#define tin(a) cin >> a
#define t2in(a,b) cin >> a >> b
#define t3in(a,b,c) cin >> a >> b >> c
#define maxheap(a) make_heap(a.begin(),a.end())
#define fixp(a)  cout << fixed << setprecision(a);
#define RM(a,n) a.erase(remove(a.begin(), a.end(), n),a.end())
#define MOD 1000000007
int prime[] = {2 , 3 , 5 , 7 , 11 , 13 , 17 , 19 , 23 , 29 , 31 , 37 , 41 , 43 , 47};
set<int> p(prime,prime+15);

inline int gmx (int a, int b){
	return a > b ? a : b;
}

inline int gmm (int a, int b){
	return a < b ? a : b;
}

inline ll get_gcd(ll a, ll b){
    ll rem = 0;
    while( b != 0){
        rem = a % b;
        a = b; 
        b = rem;
    }
    return a;   
}

ll fastexp (ll base, ll exp){
	ll res = 1;
	if (exp == 0) return 1LL;
	while(exp){
		if(exp&1) res = (res*base)%MOD;
		res = (res+MOD)%MOD;
		base = (base*base)%MOD;
		base = (base+MOD)%MOD;
		exp >>= 1;
	}
	return (ll)res;
}

struct compare {
    bool operator()(const std::string& first, const std::string& second) {
        return first.size() < second.size();
    }
};

void Verdict_Check(){
	ifstream A("my_output.txt");
	ifstream B("code_output.txt");
	
	int c1=0,c2=0;
	bool WA = false;
	string str;
	while(getline(A,str)){
		c1++;
	}
	while(getline(B,str)){
		c2++;
	}
	A.close();
	B.close();
	ifstream AA("my_output.txt");
	ifstream BB("code_output.txt");
	if (c1 != c2){
		WA = true;
	}else{
		string s,ss;
		while(getline(AA,s) && getline(BB,ss)){
			if(s != ss){
				WA = true;
			}
		}
	}
	if (WA){
		cout << "Wrong answer!!!" << endl;
	}else{
		cout << "All test cases are passed!!!" << endl;
	}
	AA.close();
	BB.close();             
}

int main(){
	fixp(5);
	int L, R; t2in(L,R);
	int ans;
	for (int i = L; i <= R; i ++){
		if (p.count(__builtin_popcountll(i)))
			ans++;
	}
	cout << ans << endl;
	//freopen("a.in","r",stdin);
	//freopen("my_output.txt","a", stdout);
	//freopen("CON", "w", stdout);
	//Verdict_Check();
	// printf("Time taken: %.7fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	cin.get(); cin.get();
	return 0;
}