#include <bits/stdc++.h>
#include <fstream>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long int ulli;
typedef long long int lli;

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

template <class T>
T min3(T a, T b, T c){
  return min(a,min(b,c));
}


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
ll const MOD = 1000000007;
//ulli const MAXMOD = 10000000000000000007;
ll const maxarSize1D = 100000000;
ll prime[] = {2 , 3 , 5 , 7 , 11 , 13 , 17 , 19 , 23 , 29 , 31 , 37 , 41 , 43 , 47};

inline int gmx (int a, int b){
  return a > b ? a : b;
}

inline int gmm (int a, int b){
  return a < b ? a : b;
}

ll GCD(ll a, ll b){
  ll rem = 0;
  if ( a == 0)return b;
  if ( b == 0) return a;
  if ( a == 1) return 1;
  if ( b == 1) return 1;
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
    if(exp&1) res = (res*base);//%MOD;
    //res = (res+MOD)%MOD;
    base = (base*base);
    //base = (base+MOD)%MOD;
    exp >>= 1;
  }
  return (ll)res;//%MOD;
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
ll calfact(int n, T fact[]){
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

long long add (long long a, long long b){
    long long s = a;
    // s += b;
    // if (s >= MOD){
    //     s -= MOD;
    // }
    // return s;
    return a+b;
}

  int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //freopen("a.in","r",stdin);
    //freopen("my_output.out","w", stdout);
    //##########################################################################################################
    //START CODE FROM HERE
    int t; cin >> t;
    while (t--){
      long long a,b,c; scanf("%lld%lld%lld",&a,&b,&c);
    //   if ( a > MOD ){
    //       a %= MOD;
    //   }
    //   if (b > MOD ){
    //       b %= MOD;
    //   }
    //   if ( c > MOD ){
    //       c %= MOD;
    //   }
    //   long long atoc = (long long) fastexp(a,c);
    //   long long btoc = (long long) fastexp(b,c);
    //   //cout << " fast exp a,c " << atoc << " fast exp b,c " << btoc << endl;
    //   long long sumab = (long long)add(atoc, btoc);
    //   if ( sumab > MOD ) sumab -= MOD;
    //   long long diffab = (long long)abs(a-b);
    //   //cout << " sumab " << sumab << " diffab " << diffab << endl;
    //   cout << GCD(sumab,diffab) << endl;
        ll atoc = pow(a,c);
        ll btoc = pow(b,c);
        ll sumab = add(atoc,btoc);
        ll diffab = abs(a-b);
        cout << __gcd(sumab, diffab) << endl;
    }
    //END OF YOUR CODE
    //##########################################################################################################
    //fclose(stdout);
    //freopen("CON", "w", stdout);
    //checkVerdict();
    return 0;
  }


//leetleetcodeleetleetcodeleetleetcodeleetleetcode
//leetleetcodeleetleetcodeleetleetcode