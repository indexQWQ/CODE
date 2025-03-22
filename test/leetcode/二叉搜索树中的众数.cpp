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
    int count=1;
    int max=0;
    TreeNode* former=nullptr;
    vector<int> result;
    void ismode(TreeNode* root){
        if(!root)return ;
        if(root->left)ismode(root->left);
        if(!former)count=1;
        else if(former->val==root->val)count++;
        else count=1;
        former=root;
        if(count==max)result.push_back(root->val);
        if(count>max){
            max=count;
            result.clear();
            result.push_back(root->val);
        }
        if(root->right)ismode(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        if(!root)return result;
        ismode(root);
        return result;
    }
};