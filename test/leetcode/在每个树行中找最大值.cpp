#include <iostream>
#include <vector>
#include <queue>
using namespace std;


 //Definition for a binary tree node.
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
    vector<int> largestValues(TreeNode* root) {
        vector<int> result;
        queue<TreeNode*> qe;
        if(root==nullptr)return result;
        qe.push(root);
        while(!qe.empty()){
            int size=qe.size();
            int max=qe.front()->val;
            for(int i=0;i<size;i++){
                TreeNode* temp=qe.front();
                qe.pop();
                max=max>temp->val?max:temp->val;
                if(temp->left)qe.push(temp->left);
                if(temp->right)qe.push(temp->right);
            }
            result.push_back(max);
        }
        return result;
    }
};