/**
 * Definition for a binary tree node.
 * qruct TreeNode {
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
    int height(TreeNode* root){
        if(root == NULL) return 0;
        return max(height(root->left),height(root->right))+1;
    }
    /*
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int n = height(root);
        queue<TreeNode*> q;
        q.push(root);
        
        
        vector<vector<int>> ans(n);
        while(!q.empty())
        {
            vector<int>level;
            int size = q.size();
            if(root == NULL) return ans;
            for(int i =0;i<size;i++){
                TreeNode* front = q.front();
                q.pop();
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
                level.push_back(front->val);

            }
         ans[n-1] = level;
         n--;
        }
        return ans;
    }
};
*/
void levelhelp(vector<vector<int>>& ans,TreeNode* root,int level)
{
if(root == NULL) return;
ans[level].push_back(root->val);
levelhelp(ans,root->left,level-1);
levelhelp(ans,root->right,level-1);
}
vector<vector<int>> levelOrderBottom(TreeNode* root) {
int level = height(root);
vector<vector<int>> ans(level,vector<int> {});
if(root == NULL) return ans;
levelhelp(ans,root,level-1);
return ans;}
};