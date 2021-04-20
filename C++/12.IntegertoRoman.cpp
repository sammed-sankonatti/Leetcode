#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string intToRoman(int num)
    {
        int ints[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int i;
        int n=sizeof(ints)/sizeof(ints[0]);
        string res="";
        for(i=0;i<n&&num>0;i++)
        {
            while (num / ints[i])
            {
                res += roman[i];
                num -= ints[i];
            }
        }
        return res;
    }
};

int main()
{
    Solution rom;
    cout<<rom.intToRoman(123)<<endl;
}