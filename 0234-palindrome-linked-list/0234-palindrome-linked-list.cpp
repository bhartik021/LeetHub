/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
    // t.c => O(n)
    // s.c => O(n)
    ListNode* current = head;
    stack<int>st;
    while(current != NULL) {
        st.push(current->val);
        current = current->next;
    }    

    while(head != NULL) {
        int store = st.top();
        st.pop();
        if(head->val != store) {
            return false;
        }
        head = head->next;
    }
    return true;
    }
};