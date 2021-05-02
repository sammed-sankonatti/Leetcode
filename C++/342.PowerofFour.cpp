#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPowerOfFour(int num)
    {
        if (num < 4 && num != 1)
            return false;
        return (__builtin_popcount(num)==1 && (num%3)==1);
    }
};

int main()
{
    Solution pow4;
    if (pow4.isPowerOfFour(8))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}