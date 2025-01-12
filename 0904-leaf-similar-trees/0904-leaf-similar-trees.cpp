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
    void dfs(TreeNode* root, vector<int> &vec){
        if(root==NULL) return;
        if(root->right==NULL && root->left ==NULL){
        vec.push_back(root->val);
        return;
        } 
        dfs(root->left,vec);
        dfs(root->right,vec);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1,v2;
        dfs(root1,v1);
        dfs(root2,v2);
        return v1==v2;
    }
};