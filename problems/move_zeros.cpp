#include <bits/stdc++.h>
using namespace std;

/*class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int store;



    }
};*/

int main()
{
    vector<int> nums = {0, 0, 0, 1, 2, 3};
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[j] = nums[i];
            j++;

            
        }
    } while(j<nums.size()) {
        nums[j]=0;
        j++;
    }
 

    for (int x : nums)
    {
        cout << x;
    }
    return 0;
}