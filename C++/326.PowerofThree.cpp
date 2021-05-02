#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        if (n <= 0 || n == 0)
            return false;
        int rem = 0;
        while (n > 1)
        {
            int res = n;
            rem = res % 3;
            if (rem != 0)
                return false;
            else
                n = n / 3;
        }
        return true;
    }
};

int main()
{
    Solution pow3;
    if (pow3.isPowerOfThree(27))
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
        return 0;
}