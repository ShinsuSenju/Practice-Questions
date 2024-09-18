/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    int lenList(ListNode head){
        int len = 0;
        while(head!=null){
            head=head.next;
            len++;
        }
        return len;
    }
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int carry = 0;
        ListNode l1h = l1;
        ListNode l2h = l2;
        int len1 = lenList(l1);
        int len2 = lenList(l2);
        if(len1<len2) return addTwoNumbers(l2,l1);
        else{
            while(l2!=null){
                int sum = l1.val+l2.val+carry;
                l1.val = sum%10;
                carry = sum/10;
                if(carry!=0 && l1.next==null){
                    ListNode newe = new ListNode(carry);
                    l1.next=newe;
                    carry=0;
                    break;
                }
                l1=l1.next;
                l2=l2.next;
            }
            while(l1!=null){
                int sum = l1.val+carry;
                l1.val=sum%10;
                carry=sum/10;
                if(l1.next==null && carry!=0){
                    ListNode newe = new ListNode(carry);
                    l1.next=newe;
                    carry=0;
                    break;
                }
                l1=l1.next;
            }
            return l1h;
            
        }

        
    }
}
