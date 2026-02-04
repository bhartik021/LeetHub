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
    void dfs(TreeNode* root, string path, string& smallest) {
        if (!root) return;
        
        path += char('a' + root->val);
        
        if (root->left == nullptr && root->right == nullptr) {
            reverse(path.begin(), path.end());
            if (smallest.empty() || path < smallest) {
                smallest = path;
            }
            reverse(path.begin(), path.end());
        }
        
        dfs(root->left, path, smallest);
        dfs(root->right, path, smallest);
    }
    string smallestFromLeaf(TreeNode* root) {
    string smallest;
    dfs(root, "", smallest);
    return smallest;    
    }
};