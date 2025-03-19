#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
class Solution {
public:
    TreeNode* traveral(vector<int>& nums){
        if(nums.size()==0)return nullptr;
        int index=0,max=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
                index=i;
            }
        }
        TreeNode* result=new TreeNode(max);
        if(nums.size()==1)return result;
        vector<int> leftnum(nums.begin(),nums.begin()+index);
        vector<int> rightnum(nums.begin()+index+1,nums.end());
        result->left=traveral(leftnum);
        result->right=traveral(rightnum);
        return result;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.empty())return nullptr;
        return traveral(nums);
    }
};