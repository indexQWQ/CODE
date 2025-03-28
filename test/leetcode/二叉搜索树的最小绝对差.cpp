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
    void gettree(TreeNode* root,vector<int>& arr){
        if(!root) return ;
        if(root->left)gettree(root->left,arr);
        arr.push_back(root->val);
        if(root->right)gettree(root->right,arr);
    }
    int getMinimumDifference(TreeNode* root) {
        if(!root)return 0;
        vector<int> arr;
        gettree(root,arr);
        int max=arr[1]-arr[0];
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]<max)max=arr[i+1]-arr[i];
        }
        return max;
    }
};