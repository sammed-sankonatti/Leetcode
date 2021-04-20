#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int i=0,j=k-1;
        while(i<j)
        {
            swap(nums[i++],nums[j--]);
        }

        int l=k, m=nums.size()-1;

        while(l<m)
        {
            swap(nums[l++],nums[m--]);
        }

        int p=0;
        int n=nums.size()-1;
        while(p<n)
        {
            swap(nums[p++],nums[n--]);
        }
    
        for(auto i:nums)
        {
            cout<<i<<"  ";
        }
    }   
};

int main()
{
    Solution rot;
    vector<int> vect{1,2,3,4,5,6,7,8};
    rot.rotate(vect,3);

}