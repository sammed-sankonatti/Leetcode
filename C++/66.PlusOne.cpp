#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits);
    void print(vector<int> &nums);
};

vector<int> Solution::plusOne(vector<int> &digits)
{
    digits[digits.size()-1]++;
    int carry=0,carry1=0;
    for(int i=digits.size()-1;i>=0;i--)
    {
            digits[i ] += carry;
            carry=digits[i]/10;
            digits[i]%=10;
    }   

   if(carry==1)
   {
       digits.insert(digits.begin(),1);
   }
    return digits;
}
void Solution::print(vector<int> &nums)
{
    for(auto i:nums)
    {
        cout<<i<<" ";
    }
}
int main()
{

    Solution plus;
    vector<int> vect{9};
    vector<int> res= plus.plusOne(vect);
    plus.print(res);

}