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
    int traget;
    void travel(TreeNode* root,queue<TreeNode*>& qe){
        if(!root)return ;
        if(root->left)travel(root->left,qe);
        if(root->right)travel(root->right,qe);
        if(root->val==traget)qe.push(root);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root && !subRoot || root && !subRoot)return true;
        else if(!root && subRoot)return false;
        queue<TreeNode*> qe;
        traget=subRoot->val;
        travel(root,qe);
        while(!qe.empty()){
            if(compare(qe.front(),subRoot))return true;
            qe.pop();
        }
        return false;
    }
};