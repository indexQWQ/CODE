#include<iostream>
#include<string>
#include<unordered_map>
#include<cmath>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> ss;
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            ss[nums[i]]++;
            if(ss[nums[i]]>1)
                result.push_back(nums[i]);
        }
        return result;
    }
};