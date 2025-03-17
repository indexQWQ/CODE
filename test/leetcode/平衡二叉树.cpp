#include <iostream>

using namespace std;

 // Definition for a binary tree node.
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
    int ismax(TreeNode* root){
        if(!root)return 0;
        int leftbool=ismax(root->left);
        if(leftbool==-1)return -1;
        int rightbool=ismax(root->right);
        if(rightbool==-1)return -1;
        if(abs(ismax(root->left)-ismax(root->right))>1)
        return -1;
        else return max(leftbool,rightbool)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(!root)return true;
        if(ismax(root)==-1)return false;
        return  true;
    }
};