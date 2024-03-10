#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        unordered_map<int, int> numMap;
        int n = nums.size();
        int totalProduct = 1;
        int base, exp;
        vector<int> ans;
        bool doesNotContainZero = true;
        vector<int> zeroPosition;

        for (int i = 0; i < n; i++)
        {
            if (nums.at(i) == 0)
            {
                zeroPosition.push_back(i);
            }
            numMap[nums.at(i)] += 1;
        }
        for (auto &pair : numMap)
        {
            base = pair.first;
            exp = pair.second;
            if (base == 0)
            {
                doesNotContainZero = false;
                if (numMap.size() == 1 || exp >= 2)
                {
                    totalProduct = 0;
                    break;
                }
            }
            else
            {
                totalProduct *= pow(base, exp);
            }
        }
        if (doesNotContainZero)
        {
            for (int i = 0; i < n; i++)
            {
                int tmp;
                tmp = totalProduct / nums.at(i);
                ans.push_back(tmp);
            }
        }
        else
        {
            ans.resize(n, 0);
            for (int i = 0; i < zeroPosition.size(); i++)
            {
                ans.at(zeroPosition.at(i)) = totalProduct;
            }
        }
        return ans;
    }
};
