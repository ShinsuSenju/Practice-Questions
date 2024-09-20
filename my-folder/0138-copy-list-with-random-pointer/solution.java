/*
// Definition for a Node.
class Node {
    int val;
    Node next;
    Node random;

    public Node(int val) {
        this.val = val;
        this.next = null;
        this.random = null;
    }
}
*/

class Solution {
    public Node copyRandomList(Node head) {
        if(head==null) return null;
        Node current = head;
        while(current!=null){
            Node fake = new Node(current.val);
            fake.next=current.next;
            current.next = fake;
            current = fake.next;
        }
        current = head;
        while(current!=null){
            Node fake = current.next;
            fake.random = current.random!=null?current.random.next:null;
            current = fake.next;
        }
        current = head;
        Node newH = current.next;
        while(current!=null){
            Node fake = current.next;
            current.next = fake.next;
            current = current.next;
            if(fake.next!=null) fake.next = fake.next.next;
        }
        return newH;

    }
}
