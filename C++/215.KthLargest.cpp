#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        priority_queue<int> pq(nums.begin(), nums.end());

        int kth = 0;
        while (k--)
        {
            kth = pq.top();
            pq.pop();
        }
        return kth;
    }
};