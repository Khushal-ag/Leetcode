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
    public ListNode rotateRight(ListNode head, int k) {
    if(head==null) return null;
       ListNode temp = head;
        int size = 0;
        while(temp.next != null)
        {
            temp  = temp.next;
            size++;
        }
        k =k%(size+1);
        ListNode prev = temp;
        prev.next = head;
        temp = head;
        int pos = size-k;
        while(pos-->0)
            temp = temp.next;
        ListNode dummy = temp.next;
        temp.next = null;
        head = dummy;
        return head;
    }
}