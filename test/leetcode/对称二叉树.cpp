#include <iostream>
#include <stack>
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
//使用栈
// class Solution {
// public:
//     bool isSymmetric(TreeNode* root) {
//         if(root==0)return false;
//         stack<TreeNode*> st;
//         st.push(root->left);
//         st.push(root->right);
//         while(!st.empty()){
//             TreeNode* rightnode=st.top();st.pop();
//             TreeNode* leftnode=st.top();st.pop();
//             if(!rightnode && !leftnode)continue;
//             if(rightnode!=nullptr && leftnode!=nullptr && rightnode->val!=leftnode->val)return false;
//             if(rightnode!=nullptr && leftnode==nullptr || rightnode==nullptr && leftnode!=nullptr)return false;
//             st.push(leftnode->left);
//             st.push(rightnode->right);
//             st.push(leftnode->right);
//             st.push(rightnode->left);
//         }
//         return true;
//     }
// };

//使用队列
// class Solution {
// public:
//     bool isSymmetric(TreeNode* root) {
//         if(root==0)return false;
//         queue<TreeNode*> st;
//         st.push(root->left);
//         st.push(root->right);
//         while(!st.empty()){
//             TreeNode* rightnode=st.front();st.pop();
//             TreeNode* leftnode=st.front();st.pop();
//             if(!rightnode && !leftnode)continue;
//             if(rightnode!=nullptr && leftnode!=nullptr && rightnode->val!=leftnode->val)return false;
//             if(rightnode!=nullptr && leftnode==nullptr || rightnode==nullptr && leftnode!=nullptr)return false;
//             st.push(leftnode->left);
//             st.push(rightnode->right);
//             st.push(leftnode->right);
//             st.push(rightnode->left);
//         }
//         return true;
//     }
// };

//使用递归
class Solution {
public:
    bool compare(TreeNode* left,TreeNode* right){
        if(!left && right || left && !right)return false;
        else if(!left && !right)return true;
        else if(left->val!=right->val)return false;
        bool outside= compare(left->left,right->right);
        bool inside= compare(left->right,right->left);
        return outside&&inside;
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)return true;
        return compare(root->left,root->right);
    }
};