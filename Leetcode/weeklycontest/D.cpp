const int N = 1e3 + 10;
int dp[N][N];

class Solution {
public:
    int lenLongestFibSubseq(vector<int>& a) {
        int n = a.size();
        int ret = 2;
        unordered_map<int, int> idx;
        for (int i = 0; i < n; ++i) {
            idx[a[i]] = i;
        }
        for (int i = n - 2; i >= 0; --i) {
            for (int j = i + 1; j < n; ++j) {
                dp[i][j] = 2;
                int x = a[i] + a[j];
                auto it = idx.find(x);
                if (it == idx.end()) continue;
                int k = it->second;
                dp[i][j] = 1 + dp[j][k];
                ret = max(ret, dp[i][j]);
            }
        }
        if (ret == 2) ret = 0;
        return ret;
    }
};