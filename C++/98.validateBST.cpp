#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    bool BSTUtil(TreeNode *root, long long min, long long max)
    {
        if (!root)
            return true;
        return root->val > min && root->val < max && BSTUtil(root->left, min, root->val) && BSTUtil(root->right, root->val, max);
    }

    bool isValidBST(TreeNode *root)
    {
        return BSTUtil(root, -1e10, 1e10);
    }
};