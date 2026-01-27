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
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
     map<int, int>mp;
     for(int i = 0; i < postorder.size(); i++) {
        mp[postorder[i]] = i;
     } 

     TreeNode* root = constructFromPrePost(preorder, 0, preorder.size() - 1,    postorder, 0, postorder.size() - 1, mp);

     return root;  
    }

    TreeNode* constructFromPrePost(vector<int>&preorder, int preStart, int     preEnd, 
    vector<int>&postorder, int postStart, int postEnd, map<int, int>&mp) {
    if(preStart > preEnd) return NULL;

    TreeNode* root = new TreeNode(preorder[preStart]);

    if(preStart == preEnd) return root;

     int leftRootVal = preorder[preStart + 1];

     int idx = mp[leftRootVal];

     int numsLeft = idx - postStart + 1;

    root->left = constructFromPrePost(preorder, preStart + 1, preStart + numsLeft, postorder, postStart, idx, mp);

    root->right = constructFromPrePost(preorder, preStart + 1 + numsLeft, preEnd,
    postorder, idx + 1, postEnd - 1, mp);

    return root;
    }
};