#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; cin >> s;
	vector<string> new_strings;
	new_strings.push_back(s);
	for (int i = 0; i < s.length(); i ++){
		if (isalpha(s[i])){
			 int end = new_strings.size();
			 for (int j = 0; j < end; j ++){
			 	string s = new_strings[j];
			 	if (s[i] >= 'A' and s[i] <= 'Z'){
			 		s[i] = tolower(s[i]);                                         
			 	}else{
			 		s[i] = toupper(s[i]);
			 	}
			 	new_strings.push_back(s);
			 }
		}
	}
	cout << new_strings[0];
cin.get(); cin.get();
return 0;
}