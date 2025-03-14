#include <iostream>
#include <stack>
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
    bool compare(TreeNode* leftnode,TreeNode* rightnode){
        if(!leftnode && rightnode || leftnode && !rightnode)return false;
        else if(!leftnode && !rightnode)return true;
        else if(leftnode->val !=rightnode->val)return false;
        bool leftbool=compare(leftnode->left,rightnode->left);
        bool rightbool=compare(leftnode->right,rightnode->right);
        return leftbool&&rightbool;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return compare(p,q);
    }
};