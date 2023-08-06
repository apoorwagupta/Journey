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
    string ans = "~"; // INT_MAX for string
    void dfs(TreeNode* root, string curr) {
        if(root==NULL) return;
        if(!root->left && !root->right) ans = min(ans,char(root->val+'a')+curr);
        dfs(root->left,char(root->val+'a')+curr); // adding new characters in front to the running string while traversing from root to leaf so that reverse string is formed
        dfs(root->right,char(root->val+'a')+curr); }

    string smallestFromLeaf(TreeNode* root) {
        dfs(root,"");
        return ans;
    }
};