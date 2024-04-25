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
    int findSize(ListNode* head){
        int len = 0;
        while(head){
            len++;
            head=head->next;
        }
        return len;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k == 0)
            return head;
        
        int n = findSize(head);
        k = k % n;
        if (k == 0) 
            return head;

        ListNode* l1 = head;
        int i = 0;
        while(i < n - k-1){
            l1 = l1->next;
            i++;
        }
        ListNode* l2 = l1->next;
        l1->next = nullptr;
        ListNode* l2h = l2;
        while(l2->next){
            l2 = l2->next;
        }
        l2->next = head;
        return l2h;
    }
};

