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
#define MAX 100005;
#define lli long long

lli ar[2*MAX];

void merge(lli a[], lli b[], int n, int m){
    int l1 = 0, l2 = 0, cnt = 0;
    while (l1 < n || l2 < m){
        if (l1 < n && l2 < m){
            if (a[l1] < b[l2]){
                ar[cnt++] = a[l1++];
            }else if (a[l1] > b[l2]){
                ar[cnt++] = b[l2++];
            }
        }else if(l1 < n){
            ar[cnt++] = a[l1++];       
        }else if (l2 < m){
            ar[cnt++] = b[l2++];
        }
    }
}

int main(){   
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    
    return 0;
}