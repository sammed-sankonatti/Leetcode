#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size() - 1;
        int n = matrix[0].size() - 1;
        int i = 0;
        int j = n;
        while (i <= m && j >= 0)
        {
            if (matrix[i][j] == target)
                return true;
            else if (matrix[i][j] > target)
                j--;
            else
                i++;
        }
        return false;
    }
};

int main()
{
    Solution val;

    vector<vector<int> > nums = {{1,4,7,11,15}, {2,5,8,12,19}, {3,6,9,16,22}, {10,13,14,17,24}, {18,21,23,27,30}};

    if (val.searchMatrix(nums, 50))
        cout<<"found";
    else
        cout<<"Not found";
}