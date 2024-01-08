class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* list1 = new ListNode();
        ListNode* head1 = list1;
        ListNode* list2 = new ListNode();
        ListNode* head2 = list2;
        ListNode* temp = head;

        while (temp != NULL) {
            if (temp->val < x) {
                list1->next = temp;
                list1 = list1->next;
            } else {
                list2->next = temp;
                list2 = list2->next;
            }
            temp = temp->next;
        }

        list1->next = head2->next;
        list2->next = NULL; 
        return head1->next;
    }
};
