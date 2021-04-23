#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseOnlyLetters(string S)
    {
        int n = S.size();
        int i = 0, j = n;

        while (i <= j)
        {
            if (isalpha(S[i]) && isalpha(S[j]))
                swap(S[i++], S[j--]);
            else if (!isalpha(S[i]))
                i++;
            else
                j--;
        }
        return S;
    }
};

int main()
{
    string S = "sap!$5ef^&sad";
    Solution rev;
    string res = "";

    res = rev.reverseOnlyLetters(S);
    cout << "result= " << res << endl;
    return 0;
}