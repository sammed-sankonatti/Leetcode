#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Vector to hold the balanced Parentheses
    vector<string> res;

    void solve(string curr, int open, int openUsed, int close, int closeUsed)
    {
        // Checking if we have used all the symbols
        // can also be done as (curr.size() == 2 * n)
        if (open == openUsed and close == closeUsed)
            res.push_back(curr);

        // If we still have '(' symbol use it.
        if (open > openUsed)
        {
            solve(curr + '(', open, openUsed + 1, close, closeUsed);
        }

        // If no. of '(' is more than the ')' symbol then we can add the ')' symbol but the vice versa is not possible since then it becomes unbalanced.
        if (openUsed > closeUsed)
        {
            solve(curr + ')', open, openUsed, close, closeUsed + 1);
        }
    }

    vector<string> generateParenthesis(int n)
    {
        res.clear();
        int openUsed = 0;  // Open Parentheses Used
        int open = n;      // Total Open parentheses
        int closeUsed = 0; // Close Parentheses Used
        int close = n;     // Total Close parentheses

        solve("", open, openUsed, close, closeUsed);

        return res;
    }
};

int main()
{
    Solution para;
    vector<string> str= para.generateParenthesis(3);

    for(auto i:str)
    {
        cout<<i<<endl;
    }
}