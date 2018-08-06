class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int mn = nums.size();
      for (int i = 0; i < nums.size(); i ++) {
        mn ^= i^nums[i];
      }
      return mn;
    }
};