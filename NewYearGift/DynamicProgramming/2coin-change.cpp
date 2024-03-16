#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int coinChange(vector<int> &coins, int amount)
    {
        vector<vector<int>> dp(amount + 1, vector<int>(coins.size() + 1));

        for (int i = 0; i <= amount; i++)
        {
            for (int j = 0; j <= coins.size(); j++)
            {
                if (i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                    continue;
                }

                if (i >= coins.at(j - 1))
                {
                    // +1で枚数増やすの忘れてた
                    int a = dp[i - coins.at(j - 1)][j] + 1;
                    int b = dp[i][j - 1];

                    if (a == 0)
                    {
                        dp[i][j] = b;
                    }
                    else if (b == 0)
                    {
                        dp[i][j] = a;
                    }
                    else
                    {
                        dp[i][j] = min(a, b);
                    }
                }
                else
                {
                    dp[i][j] = dp[i][j - 1];
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