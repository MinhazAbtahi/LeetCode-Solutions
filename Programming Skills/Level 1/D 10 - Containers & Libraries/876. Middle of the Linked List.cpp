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
    ListNode* middleNode(ListNode* head) {
        // 1 pass solution [2 pointers]        
        ListNode *slow = head;
        ListNode *fast = head;
        
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
        
        /*
        // 2 pass solution
        
        int len = 0;
        ListNode *temp = head;
        
        while(temp) {
            len++;
            temp = temp->next;
        }
        
        int idx = len / 2;
        temp = head;
        
        // traversing to mid element
        while(idx--) {         
            temp = temp->next; 
        }
        
        return temp;
        */
    }
};