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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)return nullptr;
        if(root->val==key){
            if(!root->left && !root->right){
                delete root;
                return nullptr;
            }
            else if(root->left && !root->right){
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }
            else if(!root->left && root->right){
                TreeNode* temp=root->right;
                delete root;
                return temp;
            }
            else{
                TreeNode* temp=root->right;
                while(temp->left)temp=temp->left;
                temp->left=root->left;
                TreeNode* dtemp=root;
                root=root->right;
                delete dtemp;
                return root;
            }
        }
        if(root->val>key) root->left=deleteNode(root->left,key);
        if(root->val<key) root->right=deleteNode(root->right,key);
        return root;
    }
};
