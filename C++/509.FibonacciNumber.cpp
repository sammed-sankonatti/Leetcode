#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int fib(int n)
    {
        // int arr[n]={0};
        // arr(0)=0;
        // arr[1]=1;

        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        return fib(n - 1) + fib(n - 2);
    }
};

int main()
{
   Solution f;
   cout<<f.fib(10)<<endl;

    return 0;
}