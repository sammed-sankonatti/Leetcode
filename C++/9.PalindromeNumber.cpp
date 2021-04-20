#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;

        int temp = x;
        long result=0;

    while(x)
    {
        result=result*10+ x%10;
        x/=10;
    }

        if (result == temp)
            return true;
        return false;
    }
};

int main()
{

    Solution pal;
    if (pal.isPalindrome(INT_MAX+121))
        cout<<"yes palindrome"<<endl;
    else
        cout<<"Not palindrome"<<endl;
}