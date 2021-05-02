#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int divide(int dividend, int divisor)
    {

        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        if (divisor == 1)
            return dividend;

        bool sign = dividend < 0 && divisor < 0 || dividend > 0 && divisor > 0;
        long dividendl = abs(dividend);
        long divisorl = abs(divisor);

        long q = 0;
        while (dividend >= divisor)
        {
            q++;
            dividendl -= divisorl;
        }

        return sign ? q : -q;
    }
};

int main()
{

    Solution div;
    cout << div.divide(-2147483648, 2);

    return 0;
}

