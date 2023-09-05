/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
    if(!head) return NULL;
        
    Node* current= head;
    while(current) {
        Node* copy = new Node(current->val);
        copy->next = current->next;
        current->next = copy;
        current = copy->next;
    }
        current = head;
        while(current) {
            if(current->random) {
                current->next->random = current->random->next;
            }
            current = current->next->next;
        }
        Node* newHead = head->next;
        Node* orignalCurrent = head;
        Node* copiedCurrent = newHead;
        
        while(orignalCurrent) {
          orignalCurrent->next = copiedCurrent->next;
          orignalCurrent = copiedCurrent->next;
            
            if(orignalCurrent) {
                copiedCurrent->next = orignalCurrent->next;
                copiedCurrent = copiedCurrent->next;
            }
        }
        return newHead;
    }
};