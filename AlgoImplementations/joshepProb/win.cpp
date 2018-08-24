#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
#include <set>
#include <queue>
#include <vector>
#include <iostream>
#include <map>
#include <functional>
#include <utility>
#include <fstream>
#include <string>
#include <numeric>
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef long long int lli;
typedef unsigned long long int ulli;
 
#define in(a) scanf("%d,", &(a))
#define inn(a,b) scanf("%d%d", &(a), &(b))
#define in3(a,b,c) scanf("%d%d%d", &(a), &(b), &(c))
#define printi(i) printf("%d \n", (i));
#define printc(c) printf("%c \n", (c))
#define prints(s) printf("%s \n", (s))
#define vi vector<int>
#define vll vector<long long>
#define uset unordered_set<int>
#define mapii unordered_map<int, int>
#define seti set<int>
#define vvi vector<vi>
#define forn(n) for (int i = 0; i < (n); i ++)
#define FORN(n) for (int i = 1; i <= (n) ; i ++)
#define SORT(arr) sort((arr.begin()), (arr.end()))
#define fixp(a)  cout << fixed << setprecision(a);
#define RM(a,n) a.erase(remove(a.begin(), a.end(), n),a.end())
const int MOD = 1e9 + 7;
const int maxarSize1D = 100000000;
int prime[] = {2 , 3 , 5 , 7 , 11 , 13 , 17 , 19 , 23 , 29 , 31 , 37 , 41 , 43 , 47};
 
//print vector
template <class T>
void printvec(vector<T> &v){
  for(int i = 0; i < v.size(); i ++){
    printf("%d ", v[i]);
  }
  cout << endl;
}
//take array input
template <class T>
void arrinput(T arr[], T size){
  for (int i = 0; i < size; i ++)
    scanf("%d", i + arr);
}
//take vector input
template <class T>
void vecinput(vector<T> & arr, T size){
  for (int i = 0; i < size; i ++){
    int x; scanf("%d", &x);
    arr.push_back(x);
  }
}
//min of three
template <class T>
T min3(T a, T b, T c){
  return min(a,min(b,c));
}
//get max
inline int gmx (int a, int b){
  return a > b ? a : b;
}
//get min
inline int gmm (int a, int b){
  return a < b ? a : b;
}
//big powers
ll bigpower(ll a, ll b, ll mod = MOD){
  ll res = 1;
  while (b > 0){
    if (b & 1) res = ((__int128)res * a) % mod;
    a = ((__int128)a * a) % mod;
    b >>= 1;
  }
  return res;
}
void checkVerdict(){
  ifstream file("my_output.out");
  ifstream fileb("code_output.out");
  string aout;
  string bout;
  while(getline(file, aout, '\0') && getline(fileb, bout, '\0')){
    if (aout != bout){
      cout << "Wrong Answer!!!" << endl;
    }else{
      cout << "All test cases are passed!!!" << endl;
    }
  }
  file.close();
  fileb.close();
}
 
//Convert NumberString to Integer Number
inline ll ToInt(string a){
  char x[100]; ll res;
  strcpy(x,a.c_str()); sscanf(x,"%lld",&res);
  return res;
}
 
//Convert Integer to String
inline string ToString(ll a){
  char x[100];
  sprintf(x,"%lld",a); string s = x;
  return s;
}
 
//PrecalFactorial MOD 10e9
template <class T>
void calfact(int n, T fact[]){
  //T fact[maxarSize];
  fact[0] = 1;
  for (int i = 1; i <= n; i ++){
    fact[i] = (T)(fact[i-1] * i)%MOD;
  }
}
 
//preCal Pascle Triangle
ulli pt[1001][1001];
void PT(int size){
  for (int i = 0; i <= size; i ++){
    pt[i][0] = pt[i][i] = (ulli)1;
    for (int k = 1; k < i; k ++){
      pt[i][k] = (ulli)(pt[i-1][k-1] + pt[i-1][k])%MOD;
    }
  }
}

//Seive Primes
vector<int> sPrime;
vector<ll> primes;
void SP(/*int limit, vector<ll> &sPrime*/){
  for (int i = 0; i <= 1000006; i ++){
    sPrime.push_back(i);
  }
  sPrime[0] = sPrime[1] = 0;
  int const n = 1000006;
  for(int i = 2; i <= n; i ++){
    if (sPrime[i]){
    primes.push_back(i);
    //try n === int nsqrt = (int) sqrt(n + .0);
    if ( i * 1LL * i <= n ){
        //try n === int nsqrt = (int) sqrt(n + .0);
        for ( int j = i*i; j <= n; j += i){
          sPrime[j] = 0;
        }
      }
    }
  }
}

inline string rmchar(string str, char ch){
  str.erase(remove(str.begin(),str.end(), ch), str.end());
  return str;
}

//Smallest power of two
unsigned long long nextSP(unsigned long long n ){
  ull p = 1;
  int cnt = 0;
  if ( n && !(n & (n - 1)))
    return n;
  while ( p < n ){
    p <<= 1;
    cnt ++;
  }
  return cnt-1;
}

// Disjoint Set
class dsu {
public:
	int* rank;int* parent;
	int n;
	
	dsu(int n) {
		this->n = n;
		rank = new int[n];
		parent = new int[n];
		makeset();
	}

	void makeset() {
		for (int i = 1; i <= n; i++){
			parent[i] = i;
		}
	}

	int find(int x) {
		if (parent[x] != x) {
			parent[x] = find(parent[x]);
		}
		return parent[x];
	}

	void unite(int x, int y) {
		int xroot = find(x), yroot = find(y);
		if (xroot == yroot) {
			return;
		}
		if (rank[xroot] < rank[yroot]) {
			parent[xroot] = yroot;
		}
		else if (rank[yroot] < rank[xroot]) {
			parent[yroot] = xroot;
		}
		else {
			parent[yroot] = xroot;
			rank[xroot] = rank[xroot] + 1;
		}
	}
};

struct joseph{
    int getmsb(int n){
        int pos = 0;
        while(n != 0){
            pos++;
            n = n >> 1;
        }
        return pos;
    }

    int recur(int n, int k){
        if (n == 1) 
            return 1;
        else
            return (recur(n-1, k) + k) % n;
    }

    int bitmagic(int n){
        if (n == 1) return 1;
        int position = getmsb(n);
        int j = 1 << (position - 1);

        n = n ^ j;
        n = n << 1;
        n = n | 1;
        return n;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //freopen("a.in","r",stdin);
    //freopen("my_output.out","w", stdout);
    //####################################################
    //START CODE FROM HERE
    int n, k; cin >> n >> k;
    joseph *sol = new joseph();
    //recur is not working correctly
    //cout << sol->recur(n, k) << endl;
    cout << sol->bitmagic(n);  
    //END OF YOUR CODE
    //####################################################
    //fclose(stdout);
    //freopen("CON", "w", stdout);
    //checkVerdict();
    return 0;
  }
