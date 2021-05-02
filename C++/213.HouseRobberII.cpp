#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int solve(vector<int> &nums)
    {
        int n = nums.size();
        int dp[n];
        if (n >= 1)
            dp[0] = nums[0];
        if (n >= 2)
            dp[1] = max(nums[0], nums[1]);

        for (int i = 2; i < nums.size(); i++)
        {
            dp[i] = max(dp[i - 1], nums[i] + dp[i - 2]);
        }

        return dp[n - 1];
    }

    int rob(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;
        if (nums.size() == 1)
            return nums[0];
        vector<int> v1(nums.begin(), nums.end() - 1);
        vector<int> v2(nums.begin() + 1, nums.end());
        return max(solve(v1), solve(v2));
    }
};

int main()
{
    vector<int> nums = {2, 7, 9, 3, 1};
    Solution robbery;
    cout << robbery.rob(nums);

    return 0;
}