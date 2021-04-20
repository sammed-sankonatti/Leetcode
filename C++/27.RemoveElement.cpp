#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int count =0;
       for(auto i:nums)
       {
           if(i!=val)
                nums[count++]=i;
       }
       auto it=nums.begin()+count;
       nums.erase(it,nums.end());
       return nums.size();
    }
};

int main()
{
    Solution rem;
    vector<int> vect{2,3,3,2,2,2,3};
    cout<<rem.removeElement(vect,3)<<endl;

    for(auto i:vect)
    {
        cout<<i<< " ";
    }
}