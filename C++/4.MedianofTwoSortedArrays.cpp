#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int n1=nums1.size(), n2= nums2.size();
         for(int k=0;k<n2;k++)
         {
             nums1.push_back(nums2[k]);
         }

        sort(nums1.begin(),nums1.end());
        int p=nums1.size();
        int mid=p/2;
        double res=0;
        if(p%2==0)
        {
            int num =nums1[mid] + nums1[mid - 1];
            res= ((double)num)/2;
        }
        else
            res= nums1[mid];

        return res;
    }
};

int main()
{
    vector<int> v1{1,2};
    vector<int>v2{3,4};
    Solution median;
    double res= median.findMedianSortedArrays(v1,v2);
    cout<<res<<endl;

}