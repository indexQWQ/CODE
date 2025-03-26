#include <iostream>
#include <vector>
#include <queue>
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty())return nullptr;
        int left,right;
        TreeNode* root=nullptr,*ll,*rr;
        root=new TreeNode(nums[nums.size()/2]);
        left=nums.size()/2-1;
        right=nums.size()/2+1;
        ll=rr=root;
        while(left>=0 || right<nums.size()){
            if(left>=0){
                ll->left=new TreeNode(nums[left]);
                ll=ll->left;
            }
            if(right<nums.size()){
                rr->right=new TreeNode(nums[right]);
                rr=rr->right;
            }
            left--;
            right++;        
        }
        return root;
    }
};