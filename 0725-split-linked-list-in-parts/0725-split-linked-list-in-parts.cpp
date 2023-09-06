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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
    ListNode* temp = head;
        int len = 0;
        while(temp != NULL) {
            len++;
            temp = temp->next;
        }
        int n = len / k;
        int rem = len % k;
        
        vector<ListNode*>parts(k, NULL) ;
            ListNode* current = head, *prev = NULL;
            for(int i  = 0; current && i < k; i++, rem--) {
                parts[i] = current;
                for(int j = 0; j < n + (rem > 0); j++) {
                    prev = current;
                    current = current->next;
                }
                prev->next = NULL;
            }
        return parts;
    }
};