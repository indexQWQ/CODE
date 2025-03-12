#include <iostream>
#include <vector>

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

//递归版本
// void traval(TreeNode* root,vector<int>& result){
//     if(root==nullptr)return ;
//     result.push_back(root->val);
//     traval(nullptr,result);
//     traval(root->left,result);
//     traval(root->right,result);
// }
// class Solution {
// public:
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> result;
//         traval(root,result);
//         return result;
//     }
// };

//迭代版本
#include <stack>
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> st;
        if(root==nullptr)return result;
        st.push(root);
        while(!st.empty()){
            TreeNode* temp=st.top();
            st.pop();
            result.push_back(temp->val);
            if(temp->right!=nullptr)st.push(temp->right);
            if(temp->left!=nullptr)st.push(temp->left);
        }
        return result;
    }
};