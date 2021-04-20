#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int N=0;
        map<char, int> mp;

        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;

        for(int i=0;i<s.size();i++)
        {
           auto current = mp.find(s[i]);
           int currentInt= current->second;
           auto next = mp.find(s[i+1]);
           int nextInt= next->second;

            if(currentInt > nextInt)
                N+= currentInt;
            else
            {
                N+= nextInt-currentInt;
                i++;
            }     
        }
    return N;
    }
};

int main()
{
    Solution roman;
    cout<<roman.romanToInt("MCMXCIV");

}