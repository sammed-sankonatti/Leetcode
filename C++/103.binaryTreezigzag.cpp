#include<bits/stdc++.h>
using namespace std;


 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };


//     Input: root = [3,9,20,null,null,15,7]
//     Output: [[3],[20,9],[15,7]]

class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> res(0);
        vector<int> vect(0);
        if (!root)
            return res;

        list<TreeNode *> queue;
        queue.push_back(root);
        TreeNode *front = nullptr;
        int n = queue.size();
        bool flag = true;
        while (!queue.empty())
        {
            n = queue.size();

            if (flag)
            {
                while (n--)
                {
                    front = queue.front();
                    queue.pop_front();
                    vect.push_back(front->val);

                    if (front->left)
                        queue.push_back(front->left);
                    if (front->right)
                        queue.push_back(front->right);
                }
                res.push_back(vect);
                vect.clear();
            }
            else
            {
                while (n--)
                {
                    front = queue.back();
                    queue.pop_back();
                    vect.push_back(front->val);

                    if (front->right)
                        queue.push_front(front->right);
                    if (front->left)
                        queue.push_front(front->left);
                }
                res.push_back(vect);
                vect.clear();
            }
            flag = !flag;
        }
        return res;
    }
};