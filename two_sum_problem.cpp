#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                int sum;

                sum = nums[i] + nums[j];

                if (sum == target)
                {
                    return {i, j};
                }
            }
        }
        cout << "Target not found";
        return {};
    }
};

int main() {

     Solution sol;
     vector<int> nums = {1,3,5,7,8};
     int target = 4;

    vector<int> result  = sol.twoSum(nums, target);
    cout << result[0] << "," <<result[1];

}
