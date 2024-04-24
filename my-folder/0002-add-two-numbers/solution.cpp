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
    int len(ListNode* head){
        int length=0;
        while(head){
            length++;
            head=head->next;
        }
        return length;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int a = len(l1);
        int b = len(l2);
        if(a<b) return addTwoNumbers(l2,l1);
        int carry=0;
        ListNode* oldH=l1;
        ListNode* prev=nullptr;
        while(l1 && l2){
            l1->val+=l2->val+carry;
            if(l1->val>=10){
                carry=l1->val/10;
                l1->val=l1->val%10;
            }
            else carry=0;
            prev=l1;
            l1=l1->next;
            l2=l2->next;
        }
        
        while(l1){
            l1->val+=carry;
            if(l1->val>=10){
                carry=l1->val/10;
                l1->val=l1->val%10;
            }
            else carry = 0;
            prev=l1;
            l1=l1->next;
        }
        
        if(carry){
            ListNode* newH = new ListNode(carry);
            prev->next=newH;
        }
        return oldH;
        
    }
};
