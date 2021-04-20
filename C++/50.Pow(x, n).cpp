#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        int flag=0;
        double res = 1;
        if(n<0)
        {
            n*=-1;
            flag=1;
        }
        for (int i = 1; i <= n; i++)
        {
            res *= x;
        }
        if(flag==1)
            return 1/res;
        return res;
    }
};

int main()
{
    Solution pow;
    cout<<pow.myPow(2.00,-2)<<endl;

}