#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int rieki = 0;
        for (int i = 0; i < prices.size() - 1; i++)
        {
            if (prices.at(i + 1) > prices.at(i))
            {
                rieki += prices.at(i + 1) - prices.at(i);
            }
        }

        return rieki;
    };
};