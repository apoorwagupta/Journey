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
    int dfs(TreeNode* root){
           int l,r;
           if(root==NULL) return 0;
           l = dfs(root->left);
           r = dfs(root->right);
           if(l==-1 or r==-1||abs(l-r)>1) return -1;
           return 1+max(l,r);
    }
  
    bool isBalanced(TreeNode* root) {
       return dfs(root)!=-1;
    }
};