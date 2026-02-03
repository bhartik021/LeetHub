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
    vector<vector<int>>result;
    vector<int>path;
    void dfs(TreeNode* root, int targetSum) {
        if(!root) return;

        path.push_back(root->val);

        if(!root->left && !root->right) {
            if(targetSum == root->val) {
                result.push_back(path);
            }
        }

        else {
            dfs(root->left, targetSum - root->val);
            dfs(root->right, targetSum - root->val);
        }

        path.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    dfs(root, targetSum);
    return result;    
    }
};