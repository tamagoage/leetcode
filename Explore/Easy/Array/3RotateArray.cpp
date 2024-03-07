#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        vector<int> rotatedNums(nums.end() - k, nums.end());
        rotatedNums.insert(rotatedNums.end(), nums.begin(), nums.end() - k);
        nums = rotatedNums;
    }
};