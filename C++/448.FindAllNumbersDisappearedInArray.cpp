#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        unordered_set<int> set;

        for(int i=0;i<nums.size();i++)
        {
            set.insert(nums[i]);
        }

        for(int i=1;i<=nums.size();i++)
        {
            if(set.count(i)==0)
                result.push_back(i);
        }
        return result;
    }
};


void printResult(vector<int> &res)
{
    for(auto i:res)
    {
        cout<<i<<" ";
    }
}

int main()
{
    vector<int> nums{4,3,2,7,8,2,3,1};
    vector<int> result;
    Solution allDisappeared;
    result =allDisappeared.findDisappearedNumbers(nums);
    printResult(result);
    return 0;
}