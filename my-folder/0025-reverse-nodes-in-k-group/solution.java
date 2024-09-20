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
    ListNode reverse(ListNode head){
        ListNode current = head;
        ListNode prev = null;
        while(current!=null){
            ListNode temp = current.next;
            current.next = prev;
            prev = current;
            current = temp;
        }
        return prev;
    }
    int lenList(ListNode head){
        int length = 0;
        while(head!=null){
            head=head.next;
            length++;
        }
        return length;

    }
    public ListNode reverseKGroup(ListNode head, int k) {
        if(head==null || k==1) return head;
        int groups = lenList(head)/k;
        ListNode dummy = new ListNode(-1);
        ListNode newH = dummy;
        dummy.next = head;
        while(groups!=0){
            ListNode startH = newH.next;
            ListNode current = startH;
            for(int i=1;i<k;i++){
                current = current.next;
            }
            if(current==null) break;
            ListNode nextH=current.next;
            current.next = null;
            newH.next = reverse(startH);
            startH.next = nextH;
            newH=startH;
            groups--;
        }
        return dummy.next;
       
    }
}
