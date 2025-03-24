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

// class Solution {
// public:
//     TreeNode* tp,* tq;
//     TreeNode* traveral(TreeNode* root){
//         if(!root)return nullptr;
//         if(root==tp || root==tq)return root;
//         TreeNode* left=traveral(root->left);
//         TreeNode* right=traveral(root->right);
//         if(left && right)return root;
//         else if(left && !right)return left;
//         else if(!left && right)return right;
//         else return nullptr;
//     }
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(!root)return nullptr;
//         tp=p;
//         tq=q;
//         return traveral(root);
//     }
// };

//使用搜索二叉树的方法
class Solution {
public:
    TreeNode* tp,* tq;
    TreeNode* traveral(TreeNode* root){
        if(!root)return nullptr;
        if(root->val >tq->val && root->val>tp->val){TreeNode*left=traveral(root->left);
            if(left)return left;
        }
        if(root->val <tp->val && root->val<tq->val){TreeNode* right=traveral(root->right);
            if(right)return right;
        }
        return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)return nullptr;
        tp=p;
         tq=q;
        return traveral(root);;
    }
};

//迭代的方法
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)return nullptr;
        while(root){
            if(root->val >q->val && root->val>p->val){
                root=root->left;
            }
            else if(root->val <p->val && root->val<q->val){
                root=root->right;
            }
            else return root;
        }
        return nullptr;
    }
};