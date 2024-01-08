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
    ListNode* swapPairs(ListNode* head) {
        if(!head || head->next==NULL) return head;
        ListNode* watcher = new ListNode(0,head);
        ListNode* temp = watcher;
    
        while(head && head->next!=NULL){
            ListNode* first = head;
            ListNode* second = head->next;
            first->next = second->next;
            second->next = first;
            temp->next = second;
            head = first->next;
      
            temp = first;
        }
    
        if(head) temp->next = head;
        return watcher->next;
    }
};
