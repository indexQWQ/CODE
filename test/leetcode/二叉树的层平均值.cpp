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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        queue<TreeNode*> qe;
        if(root==nullptr)return result;
        qe.push(root);
        while(!qe.empty()){
            int size=qe.size();
            double sum=0;
            for(int i=0;i<size;i++){
                TreeNode* temp=qe.front();
                qe.pop();
                sum+=temp->val;
                if(temp->left)qe.push(temp->left);
                if(temp->right)qe.push(temp->right);
            }
            result.push_back(sum/size);
        }
        return result;
    }
};