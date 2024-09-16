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
    ListNode temp;
    boolean solve(ListNode p){
        if(p==null) return true;
        boolean ans = solve(p.next) && temp.val==p.val;
        temp = temp.next;
        return ans;
    }
    public boolean isPalindrome(ListNode head) {
        temp = head;
        return solve(head);
        
    }
}
