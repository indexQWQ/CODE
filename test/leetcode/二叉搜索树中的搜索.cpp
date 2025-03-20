#include <iostream>
#include <vector>
#include <queue>

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
    int target;
    TreeNode* trav(TreeNode* root){
        if(!root)return nullptr;
        if(target==root->val)return root;
        TreeNode* result=nullptr;
        if(root->left) result=trav(root->left);
        if(root->right && !result) result=trav(root->right);
        return result;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root)return nullptr;
        target=val;
        return trav(root);
    }
};