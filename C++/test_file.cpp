#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        int y = x;
        long long int result = 0;
        if (x < 0)
            return false;

        if (x > INT_MAX)
            x /= INT_MAX;
        
        cout<<"x= "<<x<<endl;

        while (x)
        {
            result *= 10;
            result = result + x % 10;
            x /= 10;
        }

        if (result == y)
            return true;
        return false;
    }
};

int main()
{
    // int a= 21474836701;
    // cout<<"first a= "<<a<<endl;
    // cout<<"int_max= "<<INT_MAX<<endl;
    // cout << "int_min= " << INT_MIN << endl;

    // if(a>INT_MAX)
    // {
    //     a=a/INT_MAX;
    //     cout<<" after division a= "<<a<<endl;
    // }

    Solution s1;
    if (s1.isPalindrome(21474836701))
        cout<<"yes"<<endl;
    else
        cout<<"No"<<endl;
}