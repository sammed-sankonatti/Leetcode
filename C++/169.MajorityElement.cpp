#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int result=0;
        int n=nums.size();
        map<int,int> mp;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        for(auto it: mp)
        {
            if(it.second >n/2 )
                result =it.first;
        }
        return result;
    }
};

int main()
{
    vector<int> nums{2,2,1,1,1,2,2};
    Solution majority;
    cout<<majority.majorityElement(nums);

    return 0;
}