class Solution {
public:
    ListNode* reverseLink(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while (curr != nullptr) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }

    ListNode* doubleIt(ListNode* head) {
        if (head == nullptr) {
            return nullptr; 
        }

        head = reverseLink(head);

        ListNode* current = head;
        int carry = 0;
        while (current) {
            int temp = current->val*2 + carry;
            carry = temp / 10;
            current->val = temp % 10;
            if (current->next != nullptr) {
                current = current->next;
            } else {
                break;
            }
        }

        if (carry) {
            ListNode* newNode = new ListNode(carry);
            newNode->next = nullptr;
            current->next = newNode;
        }

        return reverseLink(head); 
    }
};

