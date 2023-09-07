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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
    if (!head || left == right) {
            return head;
    }
    
        // Create a dummy node to simplify edge cases.
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
    
        // Move prev to the node just before the left position.
        for (int i = 1; i < left; i++) {
            prev = prev->next;
        }

        ListNode* curr = prev->next;

        // Reverse the sublist between left and right.
        for (int i = left; i < right; i++) {
            ListNode* next_node = curr->next;
            curr->next = next_node->next;
            next_node->next = prev->next;
            prev->next = next_node;
        }

        return dummy->next;
    }
};