

// Runtime 28 ms Beats 27.63%
// Memory 11.2 MB Beats 79.62%
// O(n), space O(w)
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
// recursive 
class Solution {
private:
    void preorder(Node* curr, vector<int>& ans){
        if(!curr) return;
        ans.push_back(curr->val);
        for(int i=0; i<curr->children.size();i++) preorder(curr->children[i], ans);
    }

public:
    vector<int> preorder(Node* root) {
        vector<int> ans;
        preorder(root, ans);
        return ans;
    }
};
