#include <iostream>
#include <stack>
#include <queue>
#include <unordered_map>
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
// class Solution {
// public:
//     void sumleave(TreeNode* root,unordered_map<int,int> &sum,int deep){
//         if(!root) return;
//         if(root->left &&  !root->left->left&& !root->left->right){
//             sum.insert({deep,root->left->val});
//         }
//         if(root->right)sumleave(root->right,sum,deep+1);
//         if(root->left)sumleave(root->left,sum,deep+1);
//     }
//     int findBottomLeftValue(TreeNode* root) {
//         unordered_map<int,int> sum;
//         if(!root || !root->left && !root->right)return root->val;
//         sumleave(root,sum,0);
//         if(sum.empty())return 0;
//         int max=sum.begin()->first;
//         for(auto i:sum){
//             if(i.first>max){
//                 max=i.first;
//             }
//         }
//         return sum[max];
//     }
// };

class Solution {
public:
    int result;
    int max;
    void sumleave(TreeNode* root,int deep){
        if(!root->left && !root->left){
            if(deep>max){
                max=deep;
                result=root->val;
            };
        }
        if(root->left)sumleave(root->left,deep+1);
        if(root->right)sumleave(root->right,deep+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        if(!root || !root->left && !root->right)return root->val;
        result=0;
        sumleave(root,0);
        return result;
    }
};