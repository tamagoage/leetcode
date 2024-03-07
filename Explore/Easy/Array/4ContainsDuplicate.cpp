#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        set<int> numsSet(nums.begin(), nums.end());

        int numsSize = nums.size();
        int numsSetSize = numsSet.size();

        return numsSize != numsSetSize;
    }
};