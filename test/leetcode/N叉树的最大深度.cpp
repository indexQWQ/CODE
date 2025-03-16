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
        int max_=0;
        for(int i=0;i<root->val;i++){
            int temp=gethigh(root->children[i]);
            max_=max(max_,temp);
        }
        return 1+max_;
    }
    int maxDepth(Node* root) {
        
    }
};