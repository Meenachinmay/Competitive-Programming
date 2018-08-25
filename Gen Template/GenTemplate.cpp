#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream template_("template.cpp");
    string atcoder = "D:\\Competitive Programming\\Atcoder\\";
    string CodeChef = "D:\\Competitive Programming\\CodeChef\\";
    string Codeforces = "D:\\Competitive Programming\\Codeforces\\";
    string CodeJAMpractice = "D:\\Competitive Programming\\Code_JAM practice\\";
    string Hackerrank = "D:\\Competitive Programming\\Hackerrank\\";
    string Leetcode = "D:\\Competitive Programming\\Leetcode\\";
    string MRW_ = "D:\\Competitive Programming\\MRW_\\";
    string NewCP = "D:\\Competitive Programming\\NewCP\\";
    cout << "1.";
    cout << atcoder << endl;
    cout << "2.";
    cout << CodeChef << endl;
    cout << "3.";
    cout << Codeforces << endl;
    cout << "4.";
    cout << CodeJAMpractice << endl;
    cout << "5.";
    cout << Hackerrank << endl;
    cout << "6.";
    cout << Leetcode << endl;
    cout << "7.";
    cout << MRW_ << endl;
    cout << "8.";
    cout << NewCP << endl;
    string path = "";
    int n; cin >> n;
    assert(n >= 1 && n <= 8);
   	switch (n){
   		case 1:
   			path = atcoder;
   			break;
   		case 2:
   			path = CodeChef;
   			break;
   		case 3:
   			path = Codeforces;
   			break;
   		case 4:
   			path = CodeJAMpractice;
   			break;
   		case 5:
   			path = Hackerrank;
   			break;
   		case 6:
   			path = Leetcode;
   			break;
   		case 7:
   			path = MRW_;
   			break;
   		case 8:
   			path = NewCP;
   			break;
   	}
   	cout << "File Name: " << endl;
    string filename; cin >> filename;
    path += filename;
    //string path; getline(cin,path);
    string res = "";
    for (int i = 0; i < path.length(); i ++){
        if(path[i] == '#'){
            res += '\\';
            res += '\\';
        }else{
            res += path[i];
        }
    }
    ofstream sol(res.c_str());
    string writecode;
    while (getline(template_, writecode, '\0')){
        sol << writecode;
    }
    return 0;
}