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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL) return NULL;
        
        ListNode* temp = head;
        ListNode* current = head;;
        int len = 0;
        
        while(temp) {
            len++;
            temp = temp->next;
        }
                
        if(len == n) {
            return head->next;
        }
        
        temp = head;        
        int diff = len - n;
        
        while(diff) {
            current = temp; 
            temp = temp->next;
            diff--;
        }
        
        current->next = temp->next;
        temp->next = NULL;
        
        return head;
    }
};