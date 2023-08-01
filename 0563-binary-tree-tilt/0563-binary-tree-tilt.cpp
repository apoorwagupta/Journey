/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int tilt =0;
    int dfs(TreeNode* root){
        if(root==NULL) return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        tilt += abs(left-right); // tilt value of a node 
        
        return (root->val+left+right); // summation from this node
        
    }
    int findTilt(TreeNode* root) {
        dfs(root);
        return tilt;
    }
};