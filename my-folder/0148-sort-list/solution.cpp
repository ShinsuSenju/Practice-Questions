class Solution {
public:
    ListNode* findMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    ListNode* mergeList(ListNode* head1, ListNode* head2){
        ListNode* dummy = new ListNode(0);
        ListNode* newHead = dummy;
        while(head1 && head2){
            if(head1->val < head2->val){
                dummy->next = head1;
                dummy = dummy->next;
                head1 = head1->next;
            } else {
                dummy->next = head2;
                dummy = dummy->next;
                head2 = head2->next;
            }
        }
        
        if(head1)
            dummy->next = head1;
        else
            dummy->next = head2;
        
        ListNode* result = newHead->next;
        return newHead->next;
    }
    
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next)
            return head;
        
        ListNode* mid = findMid(head);
        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = nullptr;
        
        left = sortList(left);
        right = sortList(right);
        
        return mergeList(left, right);
    }
};

