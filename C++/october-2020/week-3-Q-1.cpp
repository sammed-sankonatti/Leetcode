#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k %= n;
        if (n > 1)
        {
            int rl = n - k;
            std::rotate(nums.begin(), nums.begin() + rl, nums.end());
        }
        for (auto i : nums)
        {
            cout << i << " ";
        }
    }
};

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int right = 5;
    vector<int> nums(arr, arr + n);
    Solution rotation;
    rotation.rotate(nums, right);

    return 0;
}