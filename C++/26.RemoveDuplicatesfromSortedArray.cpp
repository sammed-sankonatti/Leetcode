#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums);
    int removeDuplicates1(vector<int> &nums);
    int removeDuplicates2(vector<int> &nums);
    int removeDuplicates3(vector<int> &nums);
};

int Solution::removeDuplicates(vector<int> &nums)
{
    cout<<"set solution"<<endl;
    set<int> s1;

    for (auto i : nums)
    {
        s1.insert(i);
    }

    nums.assign(s1.begin(), s1.end());

    return nums.size();
}

int Solution::removeDuplicates1(vector<int> &nums)
{
    cout<<"map solution"<<endl;
    map<int,int> mp;

    for(int i=0;i<nums.size();i++)
    {
        mp[nums[i]]++;
    }
    nums.clear();

    for(auto i:mp)
    {
        nums.emplace_back(i.first);
    }

    return nums.size();
}

int Solution::removeDuplicates2(vector<int> &nums)
{
    cout << "basic in place solution" << endl;
    int last=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=nums[last])
            nums[++last]=nums[i];
    }

    return last+1;
}

int Solution::removeDuplicates3(vector<int> &nums)
{
    cout << "STL unique 1 line solution" << endl;

    return  distance(nums.begin(), unique(nums.begin(), nums.end()));
}

int main()
{
    Solution duplicate;
    vector<int> vect{1,1,2,3,4,4,4,4,5,5};
    vector<int> vect1(vect.begin(), vect.end());
    vector<int> vect2(vect.begin(), vect.end());
    vector<int> vect3(vect.begin(), vect.end());
    cout << duplicate.removeDuplicates(vect) << endl;
    cout << duplicate.removeDuplicates1(vect1) << endl;
    cout << duplicate.removeDuplicates2(vect2) << endl;
    cout << duplicate.removeDuplicates3(vect3) << endl;
}