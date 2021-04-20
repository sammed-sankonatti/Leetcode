#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        int sign =1, res=0;
        int i=0;
       if(s[0]=='-')
       {
           sign = -1;
           i++;
       }     

       if(isalpha(s[1]))
            return 0;
        
        // for(;i<s.size();i++)
        // {
        //     if(isdigit(s[i]))
        //     {
        //         res=res*10 + s[i]-'0';
        //     }
        // }

        while(!isalpha(s[i]))
        {
            if (isdigit(s[i]))
            {
                res = res * 10 + s[i] - '0';
                i++;
            }
        }
       
       return sign * res;
    }
};

int main()
{
    Solution sol;
    cout << sol.myAtoi("8912");
}