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

// class Solution {
// public:
//     bool isbst(TreeNode* root){
//         if(!root->left && !root->right){
//             return true;
//         }
//         if(root->left && root->left->val>=root->val)return false;
//         if(root->right && root->right->val<=root->val)return false;
//         bool leftbool=true,rightbool=true;
//         if(root->left) leftbool=isbst(root->left);
//         if(root->right) rightbool=isbst(root->right);
//         return leftbool && rightbool; 
//     }
//     bool isValidBST(TreeNode* root) {
//         if(!root)return false;
//         return isbst(root);
//     }
// };

class Solution {
public:
    void isbst(TreeNode* root,vector<int>& result){
        if(!root){
            return ;
        }
        if(root->left) isbst(root->left,result);
        result.push_back(root->val);
        if(root->right) isbst(root->right,result);
    }
    bool isValidBST(TreeNode* root) {
        if(!root )return false;
        if(!root->left && !root->right)return true;
        vector<int> sum;
        isbst(root,sum);;
        for(int i=0;i<sum.size()-1;i++){
            if(sum[i]>=sum[i+1]) return false;
        }
        return true;
    }
};

//不用创建数组
class Solution {
public:
    long long maxval=LONG_MIN;;
    bool isValidBST(TreeNode* root) {
        if(!root )return true;

        bool left=isValidBST(root->left);
        if(root->val>maxval){
            maxval=root->val;
        }else{
            return false;
        }
        bool right=isValidBST(root->right);
        return left&&right;
    }
};
//双指针优化
class Solution {
public:
    TreeNode* target=nullptr;
    bool isValidBST(TreeNode* root) {
        
        if(!root )return true;

        bool left=isValidBST(root->left);
        if(target && target->val>=root->val){
            return false;
        }
        target=root;
        bool right=isValidBST(root->right);
        return left&&right;
    }
};