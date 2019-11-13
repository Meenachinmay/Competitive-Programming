#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

const int MAXN = 10000;
int n, t[4*MAXN];

// to build the segment tree using array
void build(int a[], int v, int TL, int TR){
	
	if (TL == TR){
		t[v] = a[TL];
	}else {
		int TM = (TL + TR) / 2;
		build(a, v*2, TL, TM);
		build(a, v*2+1, TM+1, TR);
		t[v] = t[v*2] + t[v*2+1];		
	}	
}

// sum queries
int sum(int current_vertex, int segment_border_left, int segment_border_right, int leftlimit, int rightlimit){
	
	if (leftlimit > rightlimit){
		return 0;
	}
	
	if (leftlimit == segment_border_left && rightlimit == segment_border_right){
		return t[current_vertex];
	}
	
	int TM = (segment_border_left + segment_border_right) / 2;
	return sum(current_vertex*2, segment_border_left, TM, leftlimit, min(rightlimit, TM)) + sum(current_vertex*2+1, TM + 1, segment_border_right, max(leftlimit, TM), rightlimit);
}


int main(){
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i ++){
		cin >> a[i];
	}
	build(a, 1, 0, n - 1);

	for (int i = 0; i < n ; i ++){
		cout << t[i] << endl;
	}
	
	getch();
return 0;
}