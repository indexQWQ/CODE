/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/


#include <iostream>
#include <vector>
#include <queue>

using namespace std;
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};


class Solution {
public:
    Node* connect(Node* root) {
        if(root==nullptr)return nullptr;
        Node* result=root;
        queue<Node*> qe;
        qe.push(root);
        while(!qe.empty()){
            int size=qe.size();
            Node* slow=nullptr;
            for(int i=0;i<size;i++){
                Node* temp=qe.front();
                qe.pop();
                if(i==0)slow=temp;
                else{
                    slow->next=temp;
                    slow=temp;
                }
                if(temp->left)qe.push(temp->left);
                if(temp->right)qe.push(temp->right);
            }
            slow->next=nullptr;
        }
        return result;
    }
};