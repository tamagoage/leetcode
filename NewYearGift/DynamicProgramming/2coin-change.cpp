#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int coinChange(vector<int> &coins, int amount)
    {
        vector<vector<int>> dp(amount + 1, vector<int>(coins.size() + 1));
        unordered_map<int, int> coinMap;
        coinMap[0] = 0;

        for (int i = 0; i <= amount; i++)
        {
            for (int j = 0; j <= coins.size(); j++)
            {
                if (i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                    continue;
                }

                if (count(coins.begin(), coins.end(), i - coins.at(j - 1)))
                {
                    dp[i][j] = coinMap[i - coins.at(j - 1)] + 1;
                }
                else
                {
                    dp[i][j] = -1;
                }
            }
        }

        for (int i = 0; i <= amount; i++)
        {
            for (int j = 0; j <= coins.size(); j++)
            {
                cout << dp[i][j] << " ";
            }
            cout << "\n";
        }

        return dp[amount][coins.size()];
    }
};