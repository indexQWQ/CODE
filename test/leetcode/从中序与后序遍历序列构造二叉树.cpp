#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <unordered_map>
#include <algorithm>
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
    TreeNode* build(vector<int>& inorder, vector<int>& postorder) {
        if(postorder.size()==0)return nullptr;
        TreeNode*result=new TreeNode(postorder.back());
        if(postorder.size()==1)return result;
        //postorder.resize(postorder.size()-1);
        int index=0;
        for(int i=0;i<inorder.size();i++){
          if(inorder[i]==result->val){
            index=i;
            break;
          }
        }
        vector<int> itemp (inorder.begin(),inorder.begin()+index);
        vector<int> ptemp (postorder.begin(),postorder.begin()+index);
        vector<int> itemp1 (inorder.begin()+index+1,inorder.end());
        vector<int> ptemp1 (postorder.begin()+index,postorder.end()-1);
        result->left= buildTree(itemp,ptemp);
        result->right= buildTree(itemp1,ptemp1);
        return result;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size()==0 || postorder.size()==0)return nullptr;
        return build(inorder,postorder);
    }
};