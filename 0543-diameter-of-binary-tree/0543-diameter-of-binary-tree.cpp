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
    int max(int a,int b){
        if(a>b)return a;
        else return b;
    }
    int fxn(TreeNode* root,int &d){
        if (root==NULL) return 0;
        
        int ld=fxn(root->left,d);
        int rd=fxn(root->right,d);
        
        d=max(d,ld+rd);
        
        
        return max(ld,rd)+1;
        
        
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        fxn(root,ans);
        return ans;
        
    }
};