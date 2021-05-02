#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestValidParentheses(string s)
    {
        int n=s.size(), longest=0, count=0;
        if(!n)
            return 0;
        
        stack<char> st;
        st.push(s[0]);
        for(int i=1;i<n;i++)
        {
            if(st.top()=='(' && s[i]==')')
            {
                longest+=2;
                st.empty();
                st.push(s[i+1]);
                i++;
            } 

            else if(st.top()==')')
            {
                st.empty();
                st.push(s[i]);
            } 
            
            else{
                st.empty();
                st.push(s[i]);
            }
        }
        return longest;
    }
};

int main()
{
    string s = ")()())()()))))))()";
    Solution valid;
    cout<<valid.longestValidParentheses(s);
    return 0;
}