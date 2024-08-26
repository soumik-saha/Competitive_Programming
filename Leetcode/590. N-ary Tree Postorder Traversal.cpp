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
    vector<int> ans;
    vector<int> postorder(Node* root) {
        traverse(root);
        if(root)    ans.push_back(root->val);
        return ans;
    }
    void traverse(Node* root) {
        if(!root)   return;

        for(auto nbr:root->children) {
            traverse(nbr);
            ans.push_back(nbr->val);
        }
    }
};
