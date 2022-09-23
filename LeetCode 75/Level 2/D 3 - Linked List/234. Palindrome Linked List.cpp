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
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        
        // list is odd, shift slow 1 step right
        if(fast) slow = slow->next;
        slow = reverse(slow);
        fast = head;
        
        while(slow){
            if(slow->val != fast->val) return false;
            slow = slow->next;
            fast = fast->next;
        }
        
        return true;
    }
    
private:
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* next = head;
        while(next) {
            next = next->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
};