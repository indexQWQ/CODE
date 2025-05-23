#include <iostream>
#include <stack>
#include <queue>
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
    void sumpath(TreeNode* root,vector<int>& all,int sum){
        if(!root)return ;
        if(root->left)sumpath(root->left,all,sum+root->val);
        if(root->right)sumpath(root->right,all,sum+root->val);
        if(!root->left && !root->right){
            sum+=root->val;
            all.push_back(sum);
        }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)return false;
        vector<int> all;
        sumpath(root,all,0);
        if(find(all.begin(),all.end(),targetSum)!=all.end())return true;
        return false;
    }
};