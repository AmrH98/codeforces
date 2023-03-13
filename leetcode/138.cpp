// Runtime 7 ms Beats 82.17%
// Memory 11.3 MB Beats 67.22%

// O(n) ,space O(n)
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return NULL;
        Node* curr = head, *ans;
        unordered_map<Node*, Node*> map;
        while(curr){
            map[curr] = new Node(curr->val);
            curr = curr->next;
        }
        curr = head;
        while(curr){
            map[curr]->next = map[curr->next];
            map[curr]->random = map[curr->random];
            curr= curr->next;
        }
        ans = map[head];
        return ans;

    }
};
