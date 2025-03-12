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

//递归
// void traval(TreeNode* root,vector<int>& result){
//     if(root==nullptr)return ;
    
//     traval(root->left,result);
//     result.push_back(root->val);
//     traval(root->right,result);
// }
// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> result;
//         traval(root,result);
//         return result;
//     }
// };

//迭代思想
#include <stack>
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> st;
        if(root==nullptr)return result;
        st.push(root);
        while(!st.empty()){
            if(st.top()!=nullptr){
                TreeNode* temp=st.top();
                st.pop();
                if(temp->right)st.push(temp->right);
                st.push(temp);
                st.push(nullptr);
                if(temp->left)st.push(temp->left);
            }else{
                st.pop();
                result.push_back(st.top()->val);
                st.pop();
            }
        }
        return result;
    }
};