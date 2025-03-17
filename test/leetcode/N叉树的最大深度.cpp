#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

// Definition for a Node.
class Node {
public:
    int val;
     vector<Node*> children;
    Node() {}
    Node(int _val) {
        val = _val;
    }
    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    int gethigh(Node *root){
        if(!root)return 0;
        if(root->children.empty())return 1;
        vector<int> max_;
        for(int i=0;i<root->children.size();i++){
            int temp=gethigh(root->children[i]);
            max_.push_back(temp);
        }
        sort(max_.begin(),max_.end());
        return 1+max_.back();
    }
    int maxDepth(Node* root) {
        return gethigh(root);
    }
};