/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int findLength(ListNode* head){
        int length = 0;
        while(head){
            length++;
            head=head->next;
        }
        return length;

    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int length1=findLength(headA);
        int length2=findLength(headB);
        if(length1>length2){
            while(length2<length1--) headA=headA->next;
        }
        else{
            while(length1<length2--) headB=headB->next;
        }
        while(headA && headB){
            if(headA==headB) return headA;
            headA=headA->next;
            headB=headB->next;
        }
         return NULL;
        
    }
};
