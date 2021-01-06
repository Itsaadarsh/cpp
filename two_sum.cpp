#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums{2, 7, 11, 15};
    int target{18};
    vector<int> result;
    for (size_t i = 0; i < nums.size(); i++)
    {
        for (size_t j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    return result;
}