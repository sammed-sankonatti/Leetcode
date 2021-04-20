#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        return __builtin_popcount(n);
    }
    int hammingWeight2(uint32_t n)
    {
        int counter = 0;
        for (int i = 0; i <= 32; i++)
        {
            if (n & 1)
            {
                counter++;
            }
            n >>= 1;
        }
        return counter;
    }
};

int main()
{
    uint32_t n=7;
    Solution ones;
    cout<<ones.hammingWeight(n)<<endl;
    cout<<ones.hammingWeight2(n)<<endl;

    return 0;
}