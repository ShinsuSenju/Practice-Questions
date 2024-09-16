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
    ListNode reverse(ListNode head,ListNode prev){
        if(head==null) return prev;
        ListNode temp = head.next;
        head.next = prev;
        prev = head;
        head = temp;
        return reverse(head,prev);
        
    }
    public ListNode reverseList(ListNode head) {
        head  = reverse(head,null);
        return head;
    }
}
