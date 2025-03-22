#include <iostream>
#include <vector>
#include <queue>

using namespace std;


 // Definition for a binary tree node.
  struct TreeNode {
      int val;
     TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
class Solution {
public:
    TreeNode* tp,*tq;
    TreeNode* lower(TreeNode* root){
        if(!root)return nullptr;
        if(root==tp || root==tq)return root;
        TreeNode* left=lower(root->left);
        TreeNode* right=lower(root->right);
        if(left && right)return root;
        else if(!left && right)return right;
        else if(left && !right)return left;
        else return nullptr;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)return nullptr;
        tp=p;
        tq=q;
        return lower(root);
    }
};