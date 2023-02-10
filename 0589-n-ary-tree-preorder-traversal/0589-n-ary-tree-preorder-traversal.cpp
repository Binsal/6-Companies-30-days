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

class Solution {
public:
    
    void rec(Node*root,vector<int>&v){
        if(!root)return ;
        
        v.push_back(root->val);
        for(auto x:root->children){
            rec(x,v);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int>v;
        rec(root,v);
        return v;
    }
};