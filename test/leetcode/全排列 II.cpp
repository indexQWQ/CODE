#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;
    vector<int> used;
    void backtracking(vector<int>& nums){
        if(path.size()==nums.size()){
            result.push_back(path);
            return;
        }
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])!=s.end() || used[i]==1)continue;
            s.insert(nums[i]);
            path.push_back(nums[i]);
            used[i]=1;
            backtracking(nums);
            used[i]=0;
            path.pop_back();
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        if(nums.size()==0)return result;
        used.resize(nums.size(),0);
        backtracking(nums);
        return result;
    }
};