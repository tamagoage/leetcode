#include <bits/stdc++.h>
using namespace std;

int main()
{
}

class Solution
{
public:
    vector<int> removeDuplicates(vector<int> &nums)
    {
        set<int> numsSet(nums.begin(), nums.end());

        // setをvectorに変換
        vector<int> k(numsSet.begin(), numsSet.end());

        // 重複削除後の配列を返す
        return k;
    }
};