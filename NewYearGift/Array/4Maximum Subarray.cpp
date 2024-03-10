#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int numsSum = 0;
        int maxNum = *max_element(nums.begin(), nums.end());
        int n = nums.size();
        int ans;
        vector<int> subNumsSum;

        for (int i = 0; i < n; i++)
        {
            numsSum += nums.at(i);
        }

        ans = max(maxNum, numsSum);
        subNumsSum.push_back(ans);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    continue;
                }

                int vecStart = i;
                int vecEnd = j;
                int forNumsSum = 0;

                for (int k = vecStart; k <= vecEnd; k++)
                {
                    forNumsSum += nums.at(k);

                    if (forNumsSum >= ans)
                    {
                        subNumsSum.push_back(forNumsSum);
                    }
                }
            }
        }

        ans = *max_element(subNumsSum.begin(), subNumsSum.end());
        return ans;
    }
};