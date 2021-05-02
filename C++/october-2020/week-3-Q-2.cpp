#include <bits/stdc++.h>
using namespace std;

//Brute-force solution
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        if (matrix.size() == 0)
            return false;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (matrix[i][j] == target)
                    return true;
            }
        }
        return false;
    }

    bool efficientMatrixSearch(vector<vector<int>> &matrix, int target)
    {
        if (matrix.size() == 0)
            return false;
        int i = 0;
        int j = matrix[0].size() - 1;

        while (i < matrix.size() && j >= 0)
        {
            if (matrix[i][j] == target)
                return true;
            else if (target > matrix[i][j])
                i++;
            else
                j--;
        }

        return false;
    }
};

int main()
{
    // vector<vector<int> > matrix(3, vector<int>(4,0));
    vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int value=0;
    // for(int i=0;i<matrix.size();i++)
    // {
    //     for(int j=0;j<matrix[i].size();j++)
    //     {
    //         cin>>value;
    //        matrix[i][j]=value;
    //     }
    // }
    cout << "Values are inserted" << endl
         << endl;
    cout << "Brute-force solution" << endl;
    Solution matrix2D;
    if (matrix2D.searchMatrix(matrix, 4))
        cout << "yes found" << endl;
    else
        cout << "Not found" << endl;

    cout << endl;
    cout << "efficient solution" << endl;
    Solution matrix2D1;
    if (matrix2D1.efficientMatrixSearch(matrix, 5))
        cout << "yes found" << endl;
    else
        cout << "Not found" << endl;

    return 0;
}