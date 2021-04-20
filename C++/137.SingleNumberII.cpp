#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        for (auto it : mp)
        {
            if (it.second == 1)
                return it.first;
        }
        return -1;
    }
};

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int i = 2;
        for (; i < nums.size(); i += 3)
        {
            if (nums[i] != nums[i - 2])
            {
                return nums[i - 2];
            }
        }
        return nums[i - 2];
    }
};