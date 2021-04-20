#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int len = 0;
        int size = 0;
        int i = 0, j = 0;
        set<char> st;

        while (j < s.size())
        {
            if (st.find(s[j]) == st.end())
            {
                st.insert(s[j]);
                j++;
                size = st.size();
                len = max(len, size);
            }
            else
            {
                st.erase(s[i]);
                i++;
            }
        }
        return len;
    }
};