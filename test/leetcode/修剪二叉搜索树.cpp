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

//法1
// class Solution {
// public:
//     TreeNode* trimBST(TreeNode* root, int low, int high) {
//         if(!root)return nullptr;
//         if(root->left) root->left=trimBST(root->left,low,high);
//         if(root->right) root->right=trimBST(root->right,low,high);
//         if(root->val>high || root->val<low){
//             if(!root->left && !root->right){
//                 return nullptr;
//             }
//             else if(root->left && !root->right){
//                 TreeNode* temp=root->left;
//                 delete root;
//                 return temp;
//             }
//             else if(!root->left && root->right){
//                 TreeNode* temp=root->right;
//                 delete root;
//                 return temp;
//             }
//             else if(root->left && root->right){
//                 TreeNode* temp=root->right;
//                 while(temp->left)temp=temp->left;
//                 temp->left=root->left;
//                 delete root;
//                 return temp;
//             }
//         } 
//         return root;
//     }
// };


//法2
class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(!root)return nullptr;
        if(root->val <low){
            TreeNode* right=trimBST(root->right,low,high);
            return right;
        }
        else if(root->val >high){
            TreeNode* left=trimBST(root->left,low,high);
            return left;
        }
        root->left=trimBST(root->left,low,high);
        root->right=trimBST(root->right,low,high);
        return root;
    }
};