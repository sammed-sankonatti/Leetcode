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
    TreeNode *buildTreeUtil(int inStart, int preStart, int inEnd, vector<int> &preorder, vector<int> &inorder)
    {
        if (inStart > inEnd || preStart > preorder.size() - 1)
            return nullptr;

        TreeNode *root = new TreeNode(preorder[preStart]);

        int inIndex = 0;

        for (int i = inStart; i <= inEnd; i++)
        {
            if (root->val == inorder[i])
                inIndex = i;
        }

        root->left = buildTreeUtil(inStart, preStart + 1, inIndex - 1, preorder, inorder);
        root->right = buildTreeUtil(inIndex + 1, preStart + inIndex - inStart + 1, inEnd, preorder, inorder);

        return root;
    }

    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        return buildTreeUtil(0, 0, inorder.size() - 1, preorder, inorder);
    }
};