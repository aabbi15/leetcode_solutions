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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        helper(root,ans);
        
        return ans;
    }
    
    vector<int>  helper(TreeNode *root,vector<int> &ans){
        TreeNode *temp=root;
        
        if(temp==NULL) return {};
        
        ans.push_back(temp->val);
        helper(temp->left,ans);
        helper(temp->right,ans);
        
        return ans;
    }
};