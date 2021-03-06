#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestPalindrome(string str)
    {
        int n = str.length();
        if (n == 0)
            return str;
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        int max_len = 0; //max_length of palindromic substring
        int start_index = 0;

        //Substrings of length 1
        for (int i = 0; i < n; i++)
        {
            dp[i][i] = true;
            max_len = 1;
        }

        //Substrings of length 2
        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] == str[i + 1])
            {
                max_len = 2;
                start_index = i;
                dp[i][i + 1] = true;
            }
        }

        for (int k = 3; k <= n; k++)
        { // k is length of substring
            for (int i = 0; i <= n - k ; i++)
            {
                int j = i + k -1;
                //Checking if str[i...j] is palindrome or not
                if (str[i] == str[j] && dp[i + 1][j - 1] == true)
                {
                    dp[i][j] = true;
                    if (max_len < k)
                    { //Update if required
                        max_len = k;
                        start_index = i;
                    }
                }
            }
        }
        return str.substr(start_index, max_len);
    }
};

int main()
{

    string str="abaabacdba";
    Solution pal;
    cout<<pal.longestPalindrome(str);


    return 0;
}