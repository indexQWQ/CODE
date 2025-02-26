#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> num;
        for(int i=0;i<nums.size();i++)
        {
            if(num.find(target-nums[i])!=num.end())
            {
                return{i,num[target-nums[i]]};
            }
            num.insert({nums[i],i});
        }
        return {};
    }
};