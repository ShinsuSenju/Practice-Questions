class Solution {
public:
    int len(ListNode* head){
        int length=0;
        while(head){
            head=head->next;
            length++;
        }
        return length;
    }
    
    ListNode* reverse(ListNode* head){
        ListNode* current = head;
        ListNode* prev=nullptr;
        while(current){
            ListNode* tail = current->next;
            current->next=prev;
            prev=current;
            current=tail;
        }
        return prev; 
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head) return head;
        int length = len(head);
        int groups = length / k;
        ListNode* dummy = new ListNode(-1);
        dummy->next=head;
        ListNode* newH=dummy;
        while(groups--){
            ListNode* current = newH->next;
            ListNode* tail = current;
            for(int i=0;i<k-1 && tail;i++){
                tail=tail->next;
            }
            if(!tail) break;
            ListNode* nextH=tail->next;
            tail->next=nullptr;
            ListNode* reverseH=reverse(current);
            newH->next=reverseH;
            current->next=nextH;
            newH=current;


        }
        return dummy->next;
        
        
    }
};

