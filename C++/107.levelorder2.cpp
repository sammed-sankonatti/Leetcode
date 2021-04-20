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
    vector<vector<int>> levelOrderBottom(TreeNode *root)
    {
        vector<vector<int>> res(0);
        vector<int> temp(0);
        if (!root)
            return res;

        list<TreeNode *> queue;
        queue.push_back(root);

        int n = queue.size();
        TreeNode *front = nullptr;

        while (!queue.empty())
        {
            n = queue.size();
            while (n--)
            {
                front = queue.front();
                queue.pop_front();
                temp.push_back(front->val);

                if (front->left)
                    queue.push_back(front->left);
                if (front->right)
                    queue.push_back(front->right);
            }
            res.push_back(temp);
            temp.clear();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};