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
    bool isPalindrome(ListNode* head) {
        string s="";
        if(head==nullptr) return true;
        ListNode* newe = head;
        while(newe && newe->next!=head){
            s+=(char)newe->val;
            newe=newe->next;
        }
        string s2 = s;
        reverse(s2.begin(),s2.end());
        return s==s2;
        
    }
};
