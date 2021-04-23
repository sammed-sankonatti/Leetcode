#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int low=0, high=x, ans=0;
        long long mid=0;
        while(low<=high)
        {
            mid= (low+high)/2;
            if(mid*mid == x)
            {
                ans =mid;
                break;
            }
            else if(mid*mid > x)
            {
                high =mid-1;
            }
            else{
                low= mid+1;
                ans = mid;
            }       
        }
        return ans;
    }
};

int main()
{
    Solution squareqoot;
    cout << squareqoot.mySqrt(8);

    return 0;
}