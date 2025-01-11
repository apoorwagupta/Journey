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

// recursion 
/*
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
    if(root==NULL) return new TreeNode(val);
    if(val>root->val) root->right = (root->right!=NULL)? insertIntoBST(root->right,val):new TreeNode(val);
    else if (val<root->val) root->left = (root->left!=NULL)? insertIntoBST(root->left,val):new TreeNode(val);
    return root;
    }
};

*/
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
    if(root==NULL) return new TreeNode(val);
    TreeNode* temp = new TreeNode(val);
    TreeNode* parent= NULL,*curr=root;
    while(curr!=NULL){
        parent = curr;
        if(curr->val<val) curr = curr->right;
        else if(curr->val>val) curr = curr->left;
        else return root;
    }

    if(parent->val> val) parent->left = temp;
    else parent->right = temp;
    return root;
    }
};