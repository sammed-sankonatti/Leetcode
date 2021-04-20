#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int water = 0;
        int area = 0;

        int low = 0, high = height.size() - 1;

        while (low < high)
        {
            area = min(height[low], height[high]) * (high - low);
            water = max(water, area);

            height[low] < height[high] ? low++ : high--;
        }
        return water;
    }
};

int main()
{
    vector<int> nums = {2, 2, 4, 3, 3, 1, 1};
    Solution water;

    cout << water.maxArea(nums) << endl;
}