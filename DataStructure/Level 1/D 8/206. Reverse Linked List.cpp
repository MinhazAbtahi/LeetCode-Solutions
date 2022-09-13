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
    ListNode* reverseList(ListNode* head) {
        ListNode *nextNode = NULL; 
        ListNode *prevNode = NULL;
        
        if(head == NULL || head->next == NULL) return head;
        
        nextNode = reverseList(head->next);
		
		// reverse the links between the two adjacent nodes from the end
        prevNode = head->next;
        head->next = NULL;
        prevNode->next = head;;
        return nextNode;
        
        /*
        // Iterative
        while (head != NULL) {
            nextNode = head->next;
            head->next = prevNode;
            prevNode = head;
            head = nextNode;
        }
        return prevNode
        */
    }
};