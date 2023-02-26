// Runtime 46 ms Beats 55.97%
// Memory 20 MB Beats 12.23%

class MyLinkedList {
private:
    class Node{
        public:
            int val;
            Node* next;
            Node* prev;
            Node(int val, Node* prev, Node* next): val(val), prev(prev), next(next){}
            // same as Node(int val){ val = val; prev = prev; next = next;
            Node(int val): Node(val, NULL, NULL){}
            // same as Node(int val){ val = val; prev = NULL; next = NULL; 
    };
    Node* dumhead;

public:
    MyLinkedList() {
        dumhead = new Node(-1);
    }
    
    int get(int index) {
        Node* curr = dumhead->next;
        while(index > 0 && curr){ // iterate till required index
            curr = curr->next;
            index--;
        }>
        if(!curr) return -1; 
        return curr->val;     
    }
    
    void addAtHead(int val) {
        dumhead->next = new Node(val, dumhead, dumhead->next); // add new Node, prev equals NULL, next = dumhead->next
        
    }
    
    void addAtTail(int val) {
        Node* last=dumhead;
        while(last->next){ // reach last element, if last element next address = NULL
            last = last->next;
        }
        last->next = new Node(val, last, NULL); // add new Node, next = NULL, prev = last address
    }
    
    void addAtIndex(int index, int val) {
        Node *temp = dumhead;
        while(index > 0 && temp){ // iterate will reach index or of index out of bound break;
            temp = temp->next;
            index--;
        }
        if(temp){ // if reached node is valid 
            temp->next = new Node(val, temp, temp->next); // add new node after this node 
        }
    }
    
    void deleteAtIndex(int index) {
        Node* temp = dumhead;
        while(index > 0 && temp){ // iterate will reach index or of index out of bound break;
            temp = temp->next;
            index--;
        }
        if(temp && temp->next){ 
            Node* delNode = temp->next;
            temp->next = delNode->next;
            if(temp->next)
                temp->next->prev = temp;
            delete delNode;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
