/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<List<Integer>> pathSum(TreeNode root, int targetSum) {
        ArrayList<List<Integer>> l = new ArrayList<List<Integer>>();
        ArrayList<Integer> curr = new ArrayList<>();
        recur(root,targetSum,l,curr);
        return l;
    }   
    public void recur(TreeNode root, int sum,ArrayList<List<Integer>> l,ArrayList<Integer> curr)
    {
        if(root == null) return;
        curr.add(root.val);
        if(root.left==null && root.right==null && root.val == sum)
        {
            l.add(new ArrayList<Integer>(curr));
            return;
        }
        if(root.left!=null)
        {
            recur(root.left,sum-root.val,l,curr);
            curr.remove(curr.size()-1);
        }
        
        if(root.right!=null)
        {
            recur(root.right,sum-root.val,l,curr);
            curr.remove(curr.size()-1);
        }
        return;
    }
}