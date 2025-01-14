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
    void dfs(TreeNode* root, int& c,int maxv){
        if(root==NULL) return;
        if(root->val>=maxv) {maxv = root->val;c++;}
        dfs(root->left,c,maxv);
        dfs(root->right,c,maxv);
        
    }
    int goodNodes(TreeNode* root) {
        int c = 0; 
        dfs(root, c, root->val); 
        return c;
    }
};