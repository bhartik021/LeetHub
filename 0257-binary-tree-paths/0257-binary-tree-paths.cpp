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
    vector<string>ans;
    void dfs(TreeNode* root, string path) {
        if(!root) return ;

        path += to_string(root->val);

        if(!root->left && !root->right) {
            ans.push_back(path);
        }

        path += "->";
        dfs(root->left, path);
        dfs(root->right, path);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
    if(root)
      dfs(root, "");
    return ans;    
    }
};