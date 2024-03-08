#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        map<int, int> numMap;
        for (int num : nums)
        {
            numMap[num]++;
        }

        int singleNum;
        for (auto &pair : numMap)
        {
            if (pair.second == 1)
            {
                singleNum = pair.first;
            }
        }

        return singleNum;
    }
};