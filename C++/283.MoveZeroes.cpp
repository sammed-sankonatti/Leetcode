#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int count=0, i=0;
      while(i<nums.size())
       {
           if(nums[i]==0)
           {
               vector<int>::iterator it=nums.begin()+i;
               nums.erase(it);   
               count++;
           }
           if(nums[i]!=0)
                i++;
       }
       while(count--)
       {
           nums.push_back(0);
       }
    }
};

int main()
{
    Solution zeros;
    vector<int> vect{0,0,0,0,1};
    zeros.moveZeroes(vect);

    for(auto i:vect)
    {
        cout<<i<<" ";
    }
   

    return 0;
}