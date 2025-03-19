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
    TreeNode* addtree(TreeNode* root1, TreeNode* root2){
        if(!root1 && !root2)return nullptr;
        TreeNode* root=new TreeNode(0);
        if(root1)root->val+=root1->val;
        if(root2)root->val+=root2->val;
        TreeNode* l1,*r1,*l2,*r2;
        if(!root1){
            l1=nullptr;
            r1=nullptr;
        }else{
            l1=root1->left;
            r1=root1->right;
        }
        if(!root2){
            l2=nullptr;
            r2=nullptr;
        }else{
            l2=root2->left;
            r2=root2->right;
        }
        root->left=addtree(l1,l2);
        root->right=addtree(r1,r2);
        return root;
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2)return nullptr;
        return addtree(root1,root2);
    }
};