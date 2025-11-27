/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        Node* cur = head;
        Node* prev = NULL;
        
        while(cur){
            Node* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        
        return prev;
        
    }
};