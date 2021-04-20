#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++)
        {
            if(st.empty())
            {
                st.push(s[i++]);
            }

            if (s[i] == ')' && st.top() == '(' || s[i] == ']' && st.top() == '[' || s[i] == '}' && st.top() == '{' )
                st.pop();
            else
                st.push(s[i]);  
        }

        if(st.empty())
            return true;
        return false;
    }
};

int main()
{
    Solution valid;
    if (valid.isValid("(){}"))
        cout<<"Yes valid"<<endl;
    else
        cout<<"not valid"<<endl;
}