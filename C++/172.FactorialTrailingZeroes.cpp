#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int trailingZeroes(int n)
    {
        if(!n)
            return 0;
        int i=1,res=0;
       while(n/pow(5,i))
       {
           res += floor(n / pow(5,i++));
       }
       return res;
    }
};

int main()
{
    Solution trail;
    cout<<trail.trailingZeroes(5);


}