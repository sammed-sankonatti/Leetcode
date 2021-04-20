#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int n = nums.size();
        int x = 0;
        for (int i = 0; i < n; i++)
            x = x ^ nums[i];
        return x;
    }
};

int main()
{
    vector<int> nums = {2, 2, 4, 3, 3, 1, 1};
    Solution single;

    cout << single.singleNumber(nums) << endl;
}