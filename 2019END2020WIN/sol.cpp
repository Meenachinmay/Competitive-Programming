// LearnAlgo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;

template <typename T>
void consoleLog(T value) {
	cout << value << endl;
}



int main()
{
	int q; cin >> q;
	
	while (q--) {
		int a, b, n, s;
		cin >> a >> b >> n >> s;

		if (s / n <= a){
			(s % n <= b) ? cout << "Yes" << endl : cout << "No" << endl;
		}
		else{
			int res = a * n;
		
			int fuu = abs(res - s);
		

			if (fuu <= b) cout << "YES" << endl;
			else cout << "NO" << endl;

			res = 0; fuu = 0;	
		}
	}

	cin.get();
}
