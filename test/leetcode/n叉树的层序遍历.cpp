#include <iostream>
#include <vector>
#include <queue>
using namespace std;




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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> result;
        queue<Node*> qe;
        if(root==nullptr)return result;
        qe.push(root);
        while(!qe.empty()){
            int size=qe.size();
            vector<int> tep;
            for(int i=0;i<size;i++){
                Node* temp=qe.front();
                qe.pop();
                tep.push_back(temp->val);
                for(Node* i:temp->children){
                    if(i)qe.push(i);
                }
            }
            result.push_back(tep);
        }
        return result;
    }
};