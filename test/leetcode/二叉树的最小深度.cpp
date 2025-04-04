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
    int minDepth(TreeNode* root) {
        if(root==nullptr)return 0;
        queue<TreeNode*> qe;
        qe.push(root);
        int sum=0;
        while(!qe.empty()){
            int size=qe.size();
            sum++;
            for(int i=0;i<size;i++){
                
                TreeNode* temp=qe.front();
                qe.pop();
                if(temp->left)qe.push(temp->left);
                if(temp->right)qe.push(temp->right);
                if(!temp->left && !temp->right)return sum;
            }
        }
        return -1;
    }
};