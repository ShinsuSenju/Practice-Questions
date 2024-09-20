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
        ListNode prev = null;
        while(head!=null){
            ListNode temp = head.next;
            head.next = prev;
            prev=head;
            head=temp;
        }
        return prev;
    }
    int lenList(ListNode head){
        int len=0;
        while(head!=null){
            head=head.next;
            len++;
        }
        return len;
    }

    public ListNode rotateRight(ListNode head, int k) {
        int length = lenList(head);
        if(length==0) return null;
        k=k%length;
        if(k==0) return head;
        ListNode newH = reverse(head);
        ListNode dummy = new ListNode(-1);
        dummy.next = newH;
        ListNode start = newH;
        
        for(int i=1;i<k;i++){
            newH = newH.next;
        }
        if(newH==null) return dummy.next;
        ListNode temp = newH.next;
        newH.next = null;
        dummy.next=reverse(start);
        start.next=reverse(temp);
        return dummy.next;


        
    }
}
