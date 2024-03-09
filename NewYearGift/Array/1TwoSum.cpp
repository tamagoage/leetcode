#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        set<int> uniqueNums(nums.begin(), nums.end());
        // 値,場所
        int numX, numXPosition, numY, numYPosition;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            numX = nums.at(i);
            // nums.at(i) = 99999;
            numXPosition = i;

            numY = target - numX;

            auto it = uniqueNums.find(numY);
            cout << "11111Found numY in uniqueNums: " << *it << endl;
            if (it != uniqueNums.end())
            {
                auto it = find(nums.begin(), nums.end(), numY);
                // cout << "222222Found numY in uniqueNums: " << *it << endl;
                numYPosition = distance(nums.begin(), it);

                if (numXPosition == numYPosition)
                {
                    continue;
                }

                ans.push_back(numXPosition);
                ans.push_back(numYPosition);

                break;
            }
        }
        return ans;
    }
};