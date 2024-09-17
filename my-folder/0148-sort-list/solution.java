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
    ListNode merge(ListNode left,ListNode right){
        ListNode dummy = new ListNode(0);
        ListNode nHead = dummy;
        while(left!=null && right!=null){
            if(left.val<right.val){
                dummy.next=left;
                left = left.next;
            }
            else{
                dummy.next=right;
                right=right.next;
            }
            dummy=dummy.next;
        }
        if(left!=null) dummy.next=left;
        if(right!=null) dummy.next=right;
        return nHead.next;
    }
     ListNode findmid(ListNode head) {
        if (head == null || head.next == null) return head;
        ListNode slow = head;
        ListNode fast = head;
        ListNode prev = null;
        while (fast != null && fast.next != null) {
            prev = slow;
            slow = slow.next;
            fast = fast.next.next;
        }
        return prev;   
    }
    public ListNode sortList(ListNode head) {
        if(head==null || head.next==null) return head;
        ListNode mid = findmid(head);
        ListNode left = head;
        ListNode right = mid.next;
        mid.next=null;
        left = sortList(left);
        right = sortList(right);
        return merge(left,right);
    }
}
