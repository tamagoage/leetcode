#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        map<int, int> numsMap;

        for (int i = 0; i < nums.size(); i++)
        {
            numsMap[i] = nums.at(i);
        }

        for (auto it = numsMap.begin(); it != numsMap.end();)
        {
            if (it->second == 0)
            {
                it = numsMap.erase(it);
            }
            else
            {
                it++;
            }
        }

        fill(nums.begin(), nums.end(), 0);

        int i = 0;
        for (const auto &pair : numsMap)
        {
            nums.at(i) = pair.second;
            i++;
        }
    }
};

// using namespace std;

// vector<int> solution(vector<int> arr) {
//     // TODO: Implement me!
//     map<int, int> numsMap;
//     int zeroCount = 0;

//     for (int i = arr.size() - 1; 0 <= i; i--)
//     {
//         numsMap[i] = arr.at(i);
//     }

//     for (auto it = numsMap.begin(); it != numsMap.end();)
//     {
//         if (it->second == 0)
//         {
//             it = numsMap.erase(it);
//         }
//         else
//         {
//             it++;
//         }
//     }

//     fill(arr.begin(), arr.end(), 0);

//         int i = 0;
//     for (const auto &pair : numsMap)
//     {
//         arr.at(i) = pair.second;
//         i++;
//     }

//     return arr;
// }

// using namespace std;

// vector<vector<int>> solution(int numRows) {
//     // TODO: Implement me!
//     vector<vector<int>> Pascal(numRows);

//     for (int i = 0; i < numRows; i++) {
//         Pascal[i].resize(i+1);
//         for (int j = 0; j <= i; j++) {
//             if(j == 0 || j == i) {
//                 Pascal[i][j] = 1;
//             } else {
//                 Pascal[i][j] = Pascal[i - 1][j - 1] + Pascal[i - 1][j];
//             }
//         }
//     }

//     for(int i = 0; i < Pascal.size(); i++) {
//         for(int j = 0; j < Pascal[i].size(); j++) {
//             cout << Pascal[i][j] << " " ;
//         }
//         cout << endl;
//     }

//     return Pascal;
// }