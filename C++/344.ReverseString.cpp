#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n= s.size()-1;
        for(int i=0;i<n;i++)   // gives wrong ans if s.size() is used instead of n
        {
            swap(s[i],s[n]);
            n--;
        }
        for(auto i:s)
        {
            cout<<i<<" ";
        }
    }
};

int main()
{
    vector<char> s{'a','b','c'};
    Solution rev;
    rev.reverseString(s);


    

    return 0;
}