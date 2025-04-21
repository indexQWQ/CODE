#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int scope=0;
        for(int i=0;i<nums.size();i++){
            if(i<=scope)scope=max(scope,i+nums[i]);
        }
        if(nums.size()-1<=scope)return true;
        return false;
    }
};