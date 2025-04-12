#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;
    void backtracking(vector<int>& nums,int index){
        if(path.size()>=2)
            result.push_back(path);
        unordered_set<int> s;
        for(int i=index;i<nums.size();i++){
            if(s.find(nums[i])!=s.end())
                continue;
            if(!path.empty()&&path[path.size()-1]>nums[i])continue;
            path.push_back(nums[i]);
            s.insert(nums[i]);
            backtracking(nums,i+1);
            path.pop_back();
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        if(!nums.size())return result;
        backtracking(nums,0);
        return result;
    }
};