#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string  res="";
        int index=0;
    
        for(auto s: strs[0])
        {
            for(int i=1;i<strs.size();i++)
            {
                if(s != strs[i][index])
                    return res;
            }
            res += s;
            index++;
        }
       return res;
    }
};

int main()
{
    Solution longest;
    vector<string> vect;
    vect.push_back("sam");
    vect.push_back("samm");
    vect.push_back("sank");
    cout<<longest.longestCommonPrefix(vect)<<endl;
}    
