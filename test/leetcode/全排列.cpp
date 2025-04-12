#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;
    vector<int> path,used;
    void backtracking(vector<int>&nums,int index){
        if(path.size()==nums.size()){
            result.push_back(path);
        }
        for(int i=0;i<nums.size();i++){
            if(used[i]==1)continue;
            path.push_back(nums[i]);
            used[i]=1;
            backtracking(nums,i+1);
            used[i]=0;
            path.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size()==0)return result;
        used.resize(nums.size(),0);
        backtracking(nums,0);
        return result;
    }
};