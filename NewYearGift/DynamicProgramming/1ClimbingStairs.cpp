#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        vector<int> memo(n + 1);

        memo.at(0) = memo.at(1) = 1;

        for (int i = 2; i <= n; i++)
        {
            memo.at(i) = memo.at(i - 1) + memo.at(i - 2);
        }

        return memo.at(n);
        }
};