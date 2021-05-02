#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        map<int, int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it: mp)
        {
            if(it.second >1)
                return it.first;    
        }
        
        return -1;    
    }
};

int main()
{
    vector<int> nums={1,2,3,4,5};

    Solution duplicate;
    cout<<duplicate.findDuplicate(nums);
    

    return 0;
}