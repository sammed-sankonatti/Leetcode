#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        while (a.length() < b.length())
        {
            a = '0' + a;
        }
        while (b.length() < a.length())
        {
            b = '0' + b;
        }

        int n = a.length() - 1;
        int c = 0;
        string ans = "";
        int carry = 0;

        for (int i = n; i >= 0; i--)
        {
            c = c + (a[i] - '0') + (b[i] - '0');

            ans = char(c % 2 + '0') + ans;
            c = c / 2;
        }

        if (c)
        {
            ans = '1' + ans;
        }

        return ans;
    }
};

int main()
{
    string a = "11", b = "1";
    Solution add;
    cout << add.addBinary(a, b);

    return 0;
}