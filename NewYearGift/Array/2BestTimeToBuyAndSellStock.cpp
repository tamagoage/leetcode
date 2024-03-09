#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        unordered_set<int> setPrices(prices.begin(), prices.end());
        vector<int> prices22222(setPrices.begin(), setPrices.end());

        int n = prices22222.size();
        vector<int> rieki;

        for (int i = n - 1; 0 <= i; i--)
        {
            for (int j = n - 2; i <= j; j--)
            {
                if (prices.at(i) > prices.at(j))
                {
                    rieki.push_back(prices.at(j) - prices.at(i));
                }
                else if (prices.at(i) < prices.at(j))
                {
                    rieki.push_back(prices.at(i) - prices.at(j));
                }
            }
        }

        int maxRieki = 0;
        if (!rieki.empty())
        {
            auto maxIt = max_element(rieki.begin(), rieki.end());
            maxRieki = *maxIt;
        }

        if (maxRieki < 0)
        {
            maxRieki = 0;
        }

        return maxRieki;
    }
};