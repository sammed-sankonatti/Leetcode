#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int pos=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<target)
                pos++;
        }
        return pos;
    }
};

int main()
{
    vector<int> vect{1,3,5,6};
    Solution pos;
    cout<<pos.searchInsert(vect,5);

}