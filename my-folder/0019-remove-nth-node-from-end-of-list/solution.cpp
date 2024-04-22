class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0); 
        dummy->next = head;
        ListNode* n1 = dummy;
        ListNode* n2 = dummy;
        for (int i = 0; i <= n; ++i) {
            n1 = n1->next;
        }
        while (n1 != nullptr) {
            n1 = n1->next;
            n2 = n2->next;
        }
        ListNode* temp = n2->next;
        n2->next = n2->next->next;
        head = dummy->next;
        return head;
    }
};

