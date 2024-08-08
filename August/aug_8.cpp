#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart)
    {
        vector<vector<int>> result;
        int change_count = 1, flag = 1;

        result.push_back({rStart, cStart});
        while (result.size() < (rows * cols))
        {
            int temp = change_count;
            while (temp > 0)
            {
                if (flag == 1)
                    cStart++;
                else
                    cStart--;

                if (cStart < cols && cStart >= 0 && rStart < rows && rStart >= 0)
                {
                    result.push_back({rStart, cStart});
                }

                temp--;
            }
            temp = change_count;
            while (temp > 0)
            {
                if (flag == 1)
                    rStart++;
                else
                    rStart--;

                if (rStart < rows && rStart >= 0 && cStart < cols && cStart >= 0)
                {
                    result.push_back({rStart, cStart});
                }
                temp--;
            }
            change_count++;
            if (flag == 0)
                flag = 1;
            else
                flag = 0;
        }
        return result;
    }
};
