#include<bits/stdc++.h>
using namespace std;

vector<int> twoSumBruteForce(vector<int> &num, int target)
{
    int n= num.size();
    vector<int> result;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(num[i]+num[j]==target)
            {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }

    return result;
}

void twoSumEfficientWithSet(vector<int> &num, int target)
{
    int n= num.size();
    set<int> s;

    for(auto i:num)
    {
        s.insert(target-i);
    }

    for(auto i:num)
    {
        if(s.find(i)!=s.end())
        {
            cout<<"sum exist"<<endl;
            break;
        }
    }   
}

vector<int> twoSumEfficientWithMap(vector<int> &num, int target)
{
    int n=num.size();
    unordered_map<int,int> ump;
    vector<int> result;

    // for(int i=0;i<n;i++)
    // {
    //     ump[num[i]]==i;
    // }

    for(int i=0;i<n;i++)
    {
        auto found = ump.find(target-num[i]);
        if(found!=ump.end())
        {
            result.push_back(found->second);
           result.push_back(i);
           return result;
        }
        else
            ump[num[i]]=i;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     if (ump.count(target - num[i]) == 1)
    //         return {ump[target - num[i]], i};
    //     ump[num[i]]=i;
    // }

    return {};
}

    void print(vector<int> &result)
{
    for (auto i : result)
    {
        cout << i << " ";
    }
}

int main()
{
    int nums[] = { 2, 7, 11, 15 }, target = 9;
    int n= sizeof(nums)/sizeof(nums[0]);

    vector<int> num;
    num.assign(nums,nums+n);

    vector<int> result =twoSumBruteForce(num, target);
    print(result);

    twoSumEfficientWithSet(num,target);
    cout<<"solution using Map"<<endl;

    vector<int> result1 = twoSumEfficientWithMap(num,target);
    print(result1);

        return 0;
}