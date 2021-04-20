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
    TreeNode *solve(vector<int> &v, int l, int h)
    {
        if (l > h)
            return NULL;
        int mid = l + (h - l) / 2;
        TreeNode *root = new TreeNode(v[mid]);
        root->left = solve(v, l, mid - 1);
        root->right = solve(v, mid + 1, h);
        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return solve(nums, 0, nums.size() - 1);
    }



};

TreeNode *createBST(TreeNode *root, int num)
{
    if (!root)
        return new TreeNode(num);
    if (num < root->val)
        root->left = createBST(root->left, num);
    if (num > root->val)
        root->right = createBST(root->right, num);

    return root;
}

//My solution
TreeNode *sortedArrayToBST(vector<int> &nums)
{

    int n = nums.size();
    int first = n / 2;

    TreeNode *root = nullptr;
    root = createBST(root, nums[first]);

    for (int i = 0; i < n; i++)
    {
        if (i == first)
            continue;
        else
            root = createBST(root, nums[i]);
    }
    return root;
}