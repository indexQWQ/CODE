#include <iostream>
#include <vector>
#include <string>
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
    void traversal(TreeNode* root,vector<int>& path,vector<string>& result){
        path.push_back(root->val);
        if(!root->left && !root->right){
            string temp;
            for(int i=0;i<path.size()-1;i++){
                temp+=to_string(path[i]);
                temp+="->";
            }
            temp+=to_string(path[path.size()-1]);
            result.push_back(temp);
        }
        if(root->left){
            traversal(root->left,path,result);
            path.pop_back();
        }
        if(root->right){
            traversal(root->right,path,result);
            path.pop_back();
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        if(!root)return result;
        vector<int> path;
        traversal(root,path,result);
        return result;
    }
};
//隐藏回溯
class Solution {
public:
    void traversal(TreeNode* root,string path,vector<string>& result){
        path+=to_string(root->val);
        if(!root->left && !root->right){
            result.push_back(path);
        }
        if(root->left){
            traversal(root->left,path+"->",result);
        }
        if(root->right){
            traversal(root->right,path+"->",result);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        if(!root)return result;
        string path;
        traversal(root,path,result);
        return result;
    }
};