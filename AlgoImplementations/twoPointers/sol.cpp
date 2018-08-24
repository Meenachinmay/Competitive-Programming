//Given an array having N integers, find the contiguous subarray 
//having sum as great as possible, but not greater than M. 
//For details on the statement, refer the problem link here

#include <bits/stdc++.h>
using namespace std;

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
#define lli long long
#define MAX 1000005

lli ar[MAX];
int main(){   
    ios_base::sync_with_stdio(0);
	cin.tie(0);
  lli n,m; scanf("%lld%lld", &n, &m);
	for (int i = 0; i < n; i ++) scanf("%lld", i + ar);
	lli l = 0, r = 0, ans = 0;
	lli sum = 0;
	while (l < n){
		while (r < n && sum + ar[r] <= m){
			sum += ar[r++];
		}
		ans = max(ans, sum);
		sum -= ar[l++];
	}
	printf("%lld ", ans);
    return 0;
}