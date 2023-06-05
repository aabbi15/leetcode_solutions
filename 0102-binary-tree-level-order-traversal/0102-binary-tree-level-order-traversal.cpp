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
        
        if (root==NULL) return {};
        
        vector<vector<int>> ans;
        
        queue<TreeNode*> q;
        q.push(root);
        int j=0;
        while(q.size()){
            vector<int> chotu_ans;
            
        for(int i=q.size();i>0;i--){
            TreeNode *temp=q.front();
            q.pop();
            
            chotu_ans.push_back(temp->val);
            
            
            
            
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            
            
            
            
            
            }
            ans.push_back(chotu_ans);
        }
        return ans;
        
    }
};