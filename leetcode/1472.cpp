// Runtime 144 ms Beats 72.37%
// Memory 60.7 MB Beats 39.93%


class Node{ // inilize node class
    public:
        string val;
        Node* next;
        Node* prev;
        Node(string x): val(x), next(nullptr), prev(nullptr){} // constructor for a node
};

class BrowserHistory {
public:
    Node* end=NULL;
    BrowserHistory(string homepage) {
        Node* head= new Node(homepage); // create initial node
        end = head;        
    }
    
    void visit(string url) {
        Node* curr = end;
        Node* temp = new Node(url);
        temp->prev = curr;
        curr->next = temp;
        end = temp;
    }
    
    string back(int steps) {
        while(steps!=0 && end->prev){
            steps--;
            end = end->prev;
        }
        return end->val;
    }
    
    string forward(int steps) {
        while(steps!=0 && end->next){
            steps--;
            end = end->next;
        }
        return end->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
