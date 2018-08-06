#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalHammingDistance(vector<int> &nums) {
      int count = 0, mask = 1;
      for (int i = 0; i < 32; i ++){
        int k = 0;
        for (int j = 0; j < nums.size(); j ++)
          if ( (nums[j] & mask) != 0) k++;
        mask <<= 1;
        count += k * (nums.size() - k);
      }
      return count;
    }
};
int main(){


return 0;
}