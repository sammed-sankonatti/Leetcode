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
    void preorderutil(TreeNode *root, vector<int> &res)
    {
        if (!root)
            return;
        res.push_back(root->val);
        preorderutil(root->left, res);
        preorderutil(root->right, res);
    }

    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> res;
        preorderutil(root, res);

        return res;
    }
};