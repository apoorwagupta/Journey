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

/*
class Solution {
public:
    int total =0;
    void solve(TreeNode* root,int sum) {
        if(root==NULL) return;
        sum=10*sum+root->val;
        if(root->left==NULL && root->right==NULL)   {
        total+=sum;
        return;
        }
        solve(root->left,sum);
        solve(root->right,sum);
    }
    int sumNumbers(TreeNode* root) {
        solve(root,0);
        return total;
    }
};
*/
/*
class Solution {
public:
    int sumNumbers(TreeNode* root) {
        return dfs(root, 0);
    }
    // preorder dfs traversal
    int dfs(TreeNode* root, int cur) {
        if(!root) return 0;
        cur = cur * 10 + root -> val;                 // append current node's digit
        if(!root -> left && !root -> right)           // leaf node - return current number to be added to total sum
            return cur;
        return dfs(root -> left, cur) + dfs(root -> right, cur);   // recurse for child if current node is not leaf
    }  
};
*/

class Solution {
public:
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        while(q.size()) {
            auto [n, cur] = q.front(); q.pop();
            cur = cur * 10 + n -> val;
            if(n -> left) q.push({n -> left, cur});      
            if(n -> right) q.push({n -> right, cur});
            if(!n -> left && !n -> right) sum += cur;   // add to total sum if we are at leaf node
        }
        return sum;
    }
};