#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
  int minRefuelStop(int target, int startfuel, vector< vector<int> > &stations){
  	//cout << "enterd in function " << endl;
  	int cur = startfuel;
  	priority_queue<int> q;
  	int i = 0;
  	int stops = 0;
  	while (true){
  		//cout << "enterd in first while loop " << endl;
  		if (cur >= target) return stops;
  		while (i < stations.size() && stations[i][0] <= cur){
  			//cout << "enterd in sec while loop " << endl;
  			q.push(stations[i++][1]);
  			//cout << "q.top() " << q.top() << endl;
  		}

  		if (q.empty()) break;
  		cur += q.top(); q.pop();
  		++stops;
  		//cout << "stops " << endl;
  	}
  	return -1;
  }
	
};

int main(){
	int nostations, target, startfuel;
	cin >> target >> startfuel >> nostations;
	vector< vector<int> > stations;
	for (int i = 0; i < nostations; i ++){
		vector<int> temp;
		int v,u; cin >> v >> u;
		temp.push_back(v);
		temp.push_back(u);
		stations.push_back(temp);	
	}
	Solution obj;
	cout << obj.minRefuelStop(target, startfuel, stations);
	cin.get(); cin.get();
return 0;                                                                                                                                             
}      