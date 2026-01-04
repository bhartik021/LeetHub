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
    void dfs(TreeNode* root, vector<int>&ans) {
        if(!root) return ;
        if(!root->left && !root->right) {
            ans.push_back(root->val);
        }
        dfs(root->left, ans);
        dfs(root->right, ans);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
    vector<int>p, q;
    dfs(root1, p);
    dfs(root2, q);
    return (p == q);    
    }
};