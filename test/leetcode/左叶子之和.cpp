#include <iostream>
#include <queue>
#include <vector>
#include <stack>
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
class Solution {
public:
    void sumleave(TreeNode* root,int &sum){
        if(!root) return;
        if(root->left &&  !root->left->left&& !root->left->right){
            sum+=root->left->val;
        }
        if(root->right)sumleave(root->right,sum);
        if(root->left)sumleave(root->left,sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        if(!root || !root->left && !root->right)return 0;
        sumleave(root,sum);
        return sum;
    }
};
//迭代
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        if(!root || !root->left && !root->right)return 0;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            if(st.top()){
                TreeNode* temp=st.top();
                st.pop();
                if(temp->right)st.push(temp->right);
                if(temp->left)st.push(temp->left);
                st.push(temp);
                st.push(nullptr);
            }else{
                st.pop();
                if(st.top()->left && !st.top()->left->left && !st.top()->left->right){
                    sum+=st.top()->left->val;
                }
                st.pop();
            }
        }
        return sum;
    }
};