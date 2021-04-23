#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int atoi(string s)
    {
        int res=0;
        int n=s.size()-1;
        for(int i=0;i<s.size();i++)
        {
            int a =s[i]-'0';
            res= res+ pow(10,n)* a;
            n--;
        }
        return res;
    }

    string itoa(int num)
    {
        string str="";
        while(num)
        {
            char a= num%10+'0';
            str.push_back(a);
            num/=10;
        }
        reverse(str.begin(), str.end());
        return str;          
    }
    string addStrings(string num1, string num2) {
         
        int n1= atoi(num1);
        int n2= atoi(num2);

        int sum=n1+n2;
        string res= itoa(sum);

        return res;
    }
};

int main()
{
    string num1="10", num2="110";
    Solution sum;
    cout<<sum.addStrings(num1,num2);

    return 0;
}