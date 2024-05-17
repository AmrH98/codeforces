/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */

class Solution {
    dfs(curr) {
        if (curr === null) return;
        
        this.dfs(curr.left);
        this.dfs(curr.right);
        
        if (curr.val === 2 || curr.val === 3) {
            if (curr.left !== null && curr.right !== null) {
                const y = curr.right.val;
                const x = curr.left.val;
                
                if (curr.val === 3)
                    curr.val = x && y;
                else
                    curr.val = x || y;
            }
        }
    }
    
    evaluateTree(root) {
        if (root === null)
            return false;

        this.dfs(root);
        return root.val;
    }
}
