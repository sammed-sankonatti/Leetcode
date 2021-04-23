#include <bits/stdc++.h>
using namespace std;

bool rotateString1(string A, string B);

class Solution
{
public:
    string rotate(string A)
    {
        reverse(A.begin() + 1, A.end());
        reverse(A.begin(), A.end());
        return A;
    }

    bool rotateString(string A, string B)
    {
        if (A.size() != B.size())
            return false;

        if (A.size() == 0 && B.size() == 0)
            return true;

        int n = A.size();
        for (int i = 0; i < n; i++)
        {
            A = rotate(A);
            if (A == B)
                return true;
        }
        return false;
    }
};

int main()
{
    string s1 = "", s2 = "";
    Solution rotate;
    if (rotate.rotateString(s1, s2))
        cout << "S1 = S2" << endl;
    else
        cout << "S1 not equal to S2" << endl;

    cout << "method-2" << endl;

    if (rotateString1(s1, s2))
        cout << "S1 = S2" << endl;
    else
        cout << "S1 not equal to S2" << endl;

    return 0;
}

bool rotateString1(string A, string B)
{
    if (A.size() != B.size())
        return false;

    if (A.size() == 0 && B.size() == 0)
        return true;

    B += B;
    for (int i = 0; i < A.size(); i++)
    {
        if (B.substr(i, A.size()) == A)
            return true;
    }
    return false;
}