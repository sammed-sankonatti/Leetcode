#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int strStr(const string &haystack, const string &needle)
    {
        if (needle == "")
            return 0;
        return haystack.find(needle);
    }
};

int main()
{
    Solution sub;
    cout << sub.strStr("sammed", "am")<< endl;

    return 0;
}