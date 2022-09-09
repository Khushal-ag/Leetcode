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
    public int listSize(ListNode head)
    {
        ListNode temp = head;
        int size = 0;
        while(temp != null)
        {
            size++;
            temp = temp.next;
        }
        return size;
    }
    public ListNode middleNode(ListNode head) {
        ListNode temp = head;
        int mid = listSize(head)/2 + 1;
        while(mid>1)
        {
            temp = temp.next;
            mid--;
        }
        return temp;
    }
}