#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it: mp)
        {
            if(it.second >1)
            {
                res.push_back(it.first);
            }
        }
        return res;
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
    vector<int> nums={1,2,3,4,5,1,3,2};
    Solution allDuplicate;
    vector<int> res;
    res= allDuplicate.findDuplicates(nums);
    printResult(res);

    return 0;
}