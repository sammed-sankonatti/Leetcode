#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0;

        for (int i = 0; i < prices.size() - 1; i++)
        {
            if (prices[i] < prices[i + 1])
            {
                profit += prices[i + 1] - prices[i];
            }
        }
        return profit;
    }
};

int main()
{
    vector<int> vect={2,3,1,4,5,6,4,7};
    Solution profit;
    cout<<profit.maxProfit(vect)<<endl;

}