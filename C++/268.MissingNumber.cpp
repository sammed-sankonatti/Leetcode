#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int total = n * (n + 1) / 2;
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += nums[j];
        }
        return total - sum;
    }

    int missingNumber2(vector<int> &nums)
    {
        int missing = 0;
        for (int i = 0; i <= nums.size(); i++)
            missing = missing ^ i;
        for (int i = 0; i < nums.size(); i++)
            missing = missing ^ nums[i];
        return missing;
    }
};

int main()
{
    Solution mis;
    vector<int> vect{0,1, 2, 4};
    cout << mis.missingNumber(vect) << endl;
    cout<<mis.missingNumber2(vect)<<endl;

    return 0;
}