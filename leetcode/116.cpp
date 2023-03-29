// Runtime 22 ms Beats 55.12%
// Memory 17.2 MB Beats 23.26%

// O(1), space O(L) # of nodes in a level
class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        queue<Node*> qu;
        qu.push(root);
        while(!qu.empty()){
            int size = qu.size();
            for(int i=0;i<size;i++){
                Node* curr = qu.front();
                qu.pop();
                if(i==size-1) curr->next = NULL;
                else curr->next = qu.front();
                if(curr->left) qu.push(curr->left);
                if(curr->right) qu.push(curr->right);
            }
        }
        return root;
    }
};

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
