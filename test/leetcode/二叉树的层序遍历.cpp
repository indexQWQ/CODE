#include <iostream>
#include <queue>
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
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> qe;
        vector<vector<int>> reslut;
        if(root==nullptr)return reslut;
        qe.push(root);
        while(!qe.empty()){
            int size=qe.size();
            vector<int> temp;
            for(int i=0;i<size;i++){
                TreeNode* tep=qe.front();
                qe.pop();
                temp.push_back(tep->val);
                if(tep->left)qe.push(tep->left);
                if(tep->right)qe.push(tep->right);
            }
            reslut.push_back(temp);
        }
        return reslut;
    }
};