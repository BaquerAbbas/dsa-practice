#include <iostream>
#include <set>
#include <vector>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {

            if (s.count(nums[i]) == 1)
            {
                return true;
            }
            s.insert(nums[i]);
            
        } return false;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << sol.containsDuplicate(nums);

    return 0;
}