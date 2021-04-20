#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n <= 0)
            return false;
        return (n & n - 1) == 0 ? true : false;
    }
};

int main()
{
    Solution power;
    if (power.isPowerOfTwo(16))
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;

    return 0;
}