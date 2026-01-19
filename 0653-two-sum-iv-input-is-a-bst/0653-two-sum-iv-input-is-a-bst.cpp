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
private:
    bool findTargetInSortedArray(vector<int>nums, int target) {
        int i = 0; 
        int j = nums.size() - 1;
        while(i < j) {
            int sum = nums[i] + nums[j];
            if(sum == target) {
                return true;
            }
            else if(sum > target) {
                j--;
            }else {
                i++;
            }
        }
        return false;
    }
public:
    void inOrderTraversal(TreeNode* root, vector<int>&ans) {
        if(!root) return;
        inOrderTraversal(root->left, ans);
        ans.push_back(root->val);
        inOrderTraversal(root->right, ans);
    }

    bool findTarget(TreeNode* root, int k) {
    vector<int>ans;
    inOrderTraversal(root, ans); 
    return findTargetInSortedArray(ans, k);
    }
};