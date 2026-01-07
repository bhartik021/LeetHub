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
    vector<int> largestValues(TreeNode* root) {
    vector<int>result;   
    queue<TreeNode*>q; 
    if(!root) return result;
    q.push(root);
    int maxValue = INT_MIN;
    while(!q.empty()) {
        int size = q.size();
        for(int i = 0; i < size; i++) {
        TreeNode* node = q.front();
        q.pop();
        maxValue = max(maxValue, node->val);
        if(node->left) q.push(node->left);
        if(node->right) q.push(node->right);    
        }
        result.push_back(maxValue);
    }    
    return result;
    }
};