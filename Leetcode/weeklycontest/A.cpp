class Solution {
public:
    void traverse(TreeNode* p, vector<int>& A) {
        if (!p) return;
        if (!p->left && !p->right) A.push_back(p->val);
        traverse(p->left, A);
        traverse(p->right, A);
    }
    bool leafSimilar(TreeNode* r1, TreeNode* r2) {
        vector<int> A, B;
        traverse(r1, A);
        traverse(r2, B);
        if (A.size() != B.size()) return false;
        for (int i = 0; i < A.size(); ++i) {
            if (A[i] != B[i]) return false;
        }
        return true;
    }
};
