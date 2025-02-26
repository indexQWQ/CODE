#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> result;
        unordered_set<int> num(nums1.begin(),nums1.end());
        for(auto nums:nums2)
        {
            if(num.find(nums)!=num.end())
            {
                result.insert(nums);
            }
        }
        return vector<int>(result.begin(),result.end());
    }
};

int main()
{

    return 0;
}