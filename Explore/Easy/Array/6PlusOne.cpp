#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int size = digits.size() - 1;
        set<int> uniqueDigits(digits.begin(), digits.end());

        if (uniqueDigits.size() == 1 && digits.at(0) == 9)
        {
            digits.insert(digits.begin(), 1);
            fill(digits.begin() + 1, digits.end(), 0);

            return digits;
        }

        if (digits.at(size) == 9)
        {
            int i = size;
            while (i > 0 && digits.at(i) == 9)
            {
                digits.at(size) = 0;
                digits.at(i) = 0;

                if (digits.at(i - 1) != 9)
                {
                    digits.at(i - 1) += 1;
                    break;
                }

                i--;
            }

            // if (size == 0)
            // {
            //     digits.insert(digits.begin(), 1);
            //     digits[1] = 0;
            // }
        }
        else
        {
            digits.at(size) += 1;
        }

        return digits;
    }
};