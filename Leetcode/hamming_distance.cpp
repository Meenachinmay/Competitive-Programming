#include <bits/stdc++.h>
using namespace std;
template <class T>
void printvec(vector<T>& v){
  for (int i = 0; i < v.size(); i ++){
    printf("%d ", v[i]);
  }
  printf("\n");
}

int main(){
  int n; scanf("%d", &n);
  vector<int> v;
  for (int i = 0; i < n; i ++){
    int x; cin >> x;
    v.push_back(x);
  }
  printvec(v);

return 0;
}
