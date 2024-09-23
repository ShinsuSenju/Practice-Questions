
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> child;
            int n = q.size();
            for(int i=1;i<=n;i++){
                TreeNode* m = q.front();
                q.pop();
                if(m->left!=NULL) q.push(m->left);
                if(m->right!=NULL) q.push(m->right);
                child.push_back(m->val);
            }
            ans.push_back(child);
        }
        return ans;
    }
};
